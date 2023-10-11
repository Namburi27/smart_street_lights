#INTELLIGENT STREET LIGHT MONITORING AND CONTROLLING SYSTEM

A Smart Street Lights System is a cutting-edge urban lighting solution designed to enhance both security and energy efficiency. This system utilizes advanced sensors to automatically control streetlights. When it detects the presence of a person or vehicle, the lights illuminate, providing safety and visibility. In the absence of activity, the lights dim or turn off, conserving energy and reducing operational costs.

Moreover, for security purposes, this system captures and stores images when activity is detected. These images are securely stored for review and analysis. Additionally, all system data, including activity logs and image storage, is seamlessly transmitted and displayed on the Blynk Cloud platform. This cloud-based monitoring allows for real-time oversight of streetlight operation and security-related activities, empowering city officials to make informed decisions.

In summary, a Smart Street Lights System seamlessly combines motion-sensing technology, energy conservation, and cloud-based monitoring to enhance security, reduce energy consumption, and optimize urban lighting infrastructure. This innovative solution promotes safer streets while providing valuable data and image storage for security and analysis purposes.

STAGE-1

Download PyCharm:

Visit the official PyCharm website at https://www.jetbrains.com/pycharm/download/
Choose the edition of PyCharm that best suits your needs: "PyCharm Community" (free) or "PyCharm Professional" (paid).
Click on the download link for your operating system (Windows, macOS, or Linux).

To install the required libraries, simply run "pip install [library_name]" in your terminal or command prompt.
Required Libraries:
         *from ultralytics import YOLO
         *cv2--(OpenCV)
         *cvzone

"copy the code from the 'main.py' file in the repository and execute it to perform object detection."

Results of object detection:

![captured_image_1](https://github.com/Namburi27/smart_street_lights/assets/93852672/e7140845-f4a3-45f9-ad2c-3a2bbbc09835)



STAGE-2:

Communication with Blynk IOT:

Blynk is an Internet of Things (IoT) platform that allows you to build mobile applications to control and monitor hardware remotely. To create a Blynk account, follow these steps:

1. **Install the Blynk App**: Start by downloading the Blynk app on your mobile device. You can find it on the App Store (iOS) or Google Play Store (Android).

2. **Open the Blynk App**: Once the app is installed, open it.

3. **Sign Up for a Blynk Account**:
   - Tap on the "Get Started" button or "Sign Up" option on the app's main screen.
   - You will be prompted to provide your email address and create a password.

4. **Verification Code**: Blynk will send a verification code to the email address you provided. Check your email for this code and enter it in the app to verify your email.

5. **Create a New Project**:
   - After verifying your email, you will be asked to create a new project. Give your project a name and choose your hardware platform (e.g., Raspberry Pi, Arduino, etc.) or select "No hardware" if you don't have any hardware yet.

6. **Choose a Connection Type**:
   - Select the connection type you plan to use to communicate with your hardware. Blynk supports various options like Wi-Fi, Bluetooth, and USB.

7. **Customize Your Project**:
   - Once your project is created, you can customize it by adding widgets. Widgets are the elements that allow you to control and monitor your hardware. Examples include buttons, sliders, and graphs.

8. **Obtain an Auth Token**:
   - To connect your hardware to your Blynk project, you'll need an "Auth Token." This token acts as a secure key to access your project. You can find it in the project settings.

9. **Code Your Hardware**: Write the code for your hardware using the Blynk library that corresponds to your hardware platform. Include the Auth Token in your code to establish a connection with your Blynk project.

10. **Upload and Run**: Upload the code to your hardware and run it. It should now be able to communicate with your Blynk project.

11. **Test and Monitor**: Use the Blynk app to test and monitor your hardware. You can control it using the widgets you added to your project.

That's it! You've created a Blynk account and set up your first IoT project. You can create multiple projects and manage them from the Blynk app or web dashboard.

Remember to refer to the Blynk documentation and community forums for specific instructions and examples related to your hardware platform and project requirements.

![image](https://github.com/Namburi27/smart_street_lights/assets/93852672/691ad7a2-f600-4634-ae1e-43e9fafc7f7a)

**Flow Chart**

![WhatsApp Image 2023-09-22 at 10 20 59 PM](https://github.com/Namburi27/smart_street_lights/assets/93852672/4a442756-1662-4f5b-b729-ecee77314135)



![WhatsApp Image 2023-10-10 at 2 04 05 AM](https://github.com/Namburi27/smart_street_lights/assets/93852672/2e191f21-9930-45c4-86af-8cb6829b83af)




