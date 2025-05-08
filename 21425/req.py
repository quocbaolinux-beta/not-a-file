import requests
import time
import argparse
import logging
from concurrent.futures import ThreadPoolExecutor

# Set up logging
logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

def send_request(url, request_id):
    """Send a single HTTP GET request to the specified URL."""
    try:
        response = requests.get(url, timeout=5)
        logger.info(f"Request {request_id}: Status Code {response.status_code}")
        return response.status_code
    except requests.RequestException as e:
        logger.error(f"Request {request_id} failed: {e}")
        return None

def simulate_traffic(url, num_requests, delay, max_workers):
    """Simulate network traffic by sending multiple HTTP requests."""
    logger.info(f"Starting traffic simulation: {num_requests} requests to {url}")
    
    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = []
        for i in range(num_requests):
            futures.append(executor.submit(send_request, url, i + 1))
            time.sleep(delay)  # Delay between requests
            
        # Wait for all requests to complete
        for future in futures:
            future.result()

    logger.info("Traffic simulation completed.")

def main():
    # Set up argument parser
    parser = argparse.ArgumentParser(description="Simulate network traffic by sending HTTP requests.")
    parser.add_argument("url", help="Target URL to send requests to (e.g., http://example.com)")
    parser.add_argument("-n", "--num_requests", type=int, default=10, help="Number of requests to send (default: 10)")
    parser.add_argument("-d", "--delay", type=float, default=0.1, help="Delay between requests in seconds (default: 0.1)")
    parser.add_argument("-w", "--workers", type=int, default=5, help="Number of concurrent workers (default: 5)")
    
    args = parser.parse_args()

    # Validate URL
    if not args.url.startswith("http"):
        logger.error("URL must start with http:// or https://")
        return

    # Run simulation
    try:
        simulate_traffic(args.url, args.num_requests, args.delay, args.workers)
    except KeyboardInterrupt:
        logger.info("Simulation interrupted by user.")
    except Exception as e:
        logger.error(f"An error occurred: {e}")

if __name__ == "__main__":
    main()