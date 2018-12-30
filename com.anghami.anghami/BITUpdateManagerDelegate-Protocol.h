//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BITUpdateManager, NSString;

@protocol BITUpdateManagerDelegate <NSObject>

@optional
- (void)updateManagerWillExitApp:(BITUpdateManager *)arg1;
- (_Bool)willStartDownloadAndUpdate:(BITUpdateManager *)arg1;
- (_Bool)updateManagerShouldSendUsageData:(BITUpdateManager *)arg1;
- (void)didDisplayExpiryAlertForUpdateManager:(BITUpdateManager *)arg1;
- (_Bool)shouldDisplayExpiryAlertForUpdateManager:(BITUpdateManager *)arg1;
- (_Bool)shouldDisplayUpdateAlertForUpdateManager:(BITUpdateManager *)arg1 forShortVersion:(NSString *)arg2 forVersion:(NSString *)arg3;
@end
