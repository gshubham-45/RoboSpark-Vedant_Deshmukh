import  cv2
import numpy as np

# def fun(x):
#     pass

# def colormask():
    # cv2.namedWindow('masking')#created window to hold trackbars.
    # bh='blue high'
    # bl = 'blue low'
    # gh = 'green high'
    # gl = 'green low'
    # rh = 'red high'
    # rl = 'red low'
    #
    # cv2.createTrackbar(bl,'masking',0,255,fun)# created the trackbars.
    # cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    # cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    # cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    # cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    # cv2.createTrackbar(rh, 'masking', 0, 255, fun)

while True:
    img1 = cv2.imread(r"rose_flower.jpg")
    hsv = cv2.cvtColor(img1, cv2.COLOR_BGR2HSV)

    # btl=cv2.getTrackbarPos(bl,'masking')
    # gtl = cv2.getTrackbarPos(gl, 'masking')
    # rtl = cv2.getTrackbarPos(rl, 'masking')
    # bth = cv2.getTrackbarPos(bh, 'masking')
    # gth = cv2.getTrackbarPos(gh, 'masking')
    # rth = cv2.getTrackbarPos(rh, 'masking')

    rgbl = np.array([76, 95, 58], np.uint8)
    rgbh = np.array([255, 255, 255], np.uint8)

    mask = cv2.inRange(hsv, rgbl, rgbh)

    cv2.imshow('original', img1)
    cv2.imshow('masked', mask)

    k = cv2.waitKey(1)
    if k == 32:
        break

# colormask()
cv2.destroyAllWindows()