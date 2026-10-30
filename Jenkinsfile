pipeline {
    agent { 
        label 'label1'
    }
stages {
        stage('Checkout') {
            steps {
                echo 'Checking out PR code'
            }
        }

        stage('Build') {
            steps {
                echo 'Building application'
                sh 'ls -l'
            }
        }

        stage('Test') {
            steps {
                echo 'Running application tests'
            }
        }
    }

    post {
        success {
            echo 'PR build successful'
        }

        failure {
            echo 'PR build failed'
        }
    }
}
