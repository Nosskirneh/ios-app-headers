//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDPartner, GADOMIDSDK, NSString;

@interface GADNAdVerification : NSObject
{
    Class _GADOMIDPartner;
    Class _GADOMIDSDK;
    Class _GADOMIDAdSessionConfiguration;
    Class _GADOMIDAdSessionContext;
    Class _GADOMIDAdSession;
    Class _GADOMIDAdEvents;
    GADOMIDSDK *_sharedGADOMID;
    GADOMIDPartner *_partner;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)adEventsForSession:(id)arg1;
- (id)adSessionForWebView:(id)arg1 mediaType:(long long)arg2;
@property(readonly, nonatomic) NSString *OMIDVersion;
- (id)init;

@end

