import cv2
import numpy as np
original = cv2.imread(r"rose_flower.jpg")
res = cv2.resize(original, (640, 400))
hsv=cv2.cvtColor(res,cv2.COLOR_BGR2HSV)

bgrl = np.array([76,95,58], np.uint8)
bgrh = np.array([255, 255, 255], np.uint8)

mask = cv2.inRange(hsv, bgrl, bgrh)

kernel = np.array(([3, 10 ,5], [3,10,5], [0, 0, 0]), np.uint8)

blurred = cv2.filter2D(mask, -1, kernel)
avg = cv2.blur(res, (15, 15))

gaus_blur = cv2.GaussianBlur(mask, (5, 5), 0)

median = cv2.medianBlur(mask, 7)
#
bilateral = cv2.bilateralFilter(res, 5, 111, 111)
font = cv2.FONT_HERSHEY_TRIPLEX
cv2.putText(res,"ROSE",(300,350),font,4,(10,255,122),5,cv2.LINE_AA)
res=cv2.circle(res,(110,300), 80, (104,200,180),-1)
res = cv2.rectangle(res,(50,370),(170,400),(110,190,200),-1)
res = cv2.ellipse(res,(170,220),(70,40),0,0,270,(104,200,180),-1)
cv2.imshow("original", res)
cv2.imshow("masked original", mask)
cv2.imshow("blurred", blurred)
cv2.imshow("averaging", avg)
cv2.imshow("gaussian blur", gaus_blur)
cv2.imshow("median blur normal", median)
cv2.imshow("bilateral", bilateral)
cv2.waitKey(0)
cv2.destroyAllWindows()