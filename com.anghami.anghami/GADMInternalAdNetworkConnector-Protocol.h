//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMAdNetworkConnector-Protocol.h"

@class GADMAdNetworkConfig, NSString;
@protocol GADMAdNetworkAdapter;

@protocol GADMInternalAdNetworkConnector <GADMAdNetworkConnector>
@property(retain, nonatomic) GADMAdNetworkConfig *networkConfig;

@optional
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
@end

