//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol GPMSonosConfigurationChangeDelegate
- (void)handleGroupCoordinatorUpdateToGroupID:(NSString *)arg1 groupName:(NSString *)arg2;
- (void)handleGroupCoordinatorChangeToGroupID:(NSString *)arg1 groupName:(NSString *)arg2 deviceID:(NSString *)arg3 socketURL:(NSURL *)arg4;
@end

