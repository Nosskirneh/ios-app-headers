//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTGaiaConnectDevice;

@protocol SPTGaiaDevicePickerHomeDeviceEducationCellDelegate <NSObject>
- (void)homeDeviceEducationCellForDevice:(SPTGaiaConnectDevice *)arg1 didChangeSwitch:(_Bool)arg2 revertBlock:(void (^)(_Bool))arg3;
- (void)homeDeviceEducationCellDidPressCloseForDevice:(SPTGaiaConnectDevice *)arg1;
@end

