<?php
// Database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "notes_db";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Check if data is sent via POST
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $note_title = isset($_POST['title']) ? $_POST['title'] : '';
    $note_content = isset($_POST['content']) ? $_POST['content'] : '';

    if (!empty($note_title) && !empty($note_content)) {
        // Prepare and bind
        $stmt = $conn->prepare("INSERT INTO notes (title, content) VALUES (?, ?)");
        $stmt->bind_param("ss", $note_title, $note_content);

        // Execute the query
        if ($stmt->execute()) {
            echo "Note saved successfully!";
        } else {
            echo "Error: " . $stmt->error;
        }

        // Close the statement
        $stmt->close();
    } else {
        echo "Title and content cannot be empty.";
    }
}

// Close the connection
$conn->close();
?>