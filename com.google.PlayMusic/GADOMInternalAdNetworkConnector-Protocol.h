//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMAdNetworkConnector-Protocol.h"

@class GADOMAdNetworkConfig, NSString;
@protocol GADMAdNetworkAdapter;

@protocol GADOMInternalAdNetworkConnector <GADMAdNetworkConnector>
@property(retain, nonatomic) GADOMAdNetworkConfig *networkConfig;

@optional
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
@end

