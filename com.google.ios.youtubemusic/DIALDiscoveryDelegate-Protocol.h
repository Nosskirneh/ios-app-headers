//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DIALDevice;

@protocol DIALDiscoveryDelegate
- (void)didDiscoverExistingDIALDevice:(DIALDevice *)arg1;
- (void)DIALDeviceDisappeared:(DIALDevice *)arg1;
- (void)DIALDeviceAppeared:(DIALDevice *)arg1 shouldConnect:(_Bool)arg2;
- (void)didFinishSearch;
- (void)didStartSearch;
@end

