import cv2


img=cv2.imread(r"text.jpg",cv2.IMREAD_COLOR)
gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
hsv=cv2.cvtColor(img,cv2.COLOR_BGR2HSV)


old_h,old_w,c1=img.shape
old_s=img.size
img=cv2.resize(img,(300,330))
new_h,new_w,c2 = img.shape
new_s=img.size


print("original height   " ,old_h,"   after resize   ",new_h)
print("original width   " ,old_w,"   after resize   ",new_w)
print("original size   " ,old_s,"   after resize   ",new_s)


ret,thresh=cv2.threshold(gray,180,255,cv2.THRESH_BINARY)
ret1,thresh1=cv2.threshold(gray,180,255,cv2.THRESH_OTSU)
ret2,thresh2=cv2.threshold(gray,180,255,cv2.THRESH_BINARY_INV)

at=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,7,11)
at1=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,7,11)
at2=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,7,11)
at3=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,7,11)


cv2.imwrite("gray.jpg",gray)
cv2.imwrite("hsv.jpg",hsv)
cv2.imwrite("thresh1.jpg",thresh)
cv2.imwrite("thresh2.jpg",thresh1)
cv2.imwrite("thresh3.jpg",thresh2)
cv2.imwrite("adaptiveThreshold1.jpg",at)
cv2.imwrite("adaptiveThreshold2.jpg",at1)
cv2.imwrite("adaptiveThreshold3.jpg",at2)
cv2.imwrite("adaptiveThreshold4.jpg",at3)

cv2.imshow("gray",gray)
cv2.imshow("hsv",hsv)


cv2.imshow("grayscale1",thresh)
cv2.imshow("grayscale2",thresh1)
cv2.imshow("grayscale3",thresh2)
cv2.imshow("grayscale4",at)
cv2.imshow("grayscale5",at1)
cv2.imshow("grayscale6",at2)
cv2.imshow("grayscal",at3)

cv2.waitKey(0)
cv2.destroyAllWindows()