//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageSDKMessage-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTInAppMessageSDKCardMessage : NSObject <SPTInAppMessageSDKMessage>
{
    _Bool _fullScreen;
    NSString *_html;
    NSString *_identifier;
    NSString *_uuid;
    NSURL *_impressionURL;
    NSDictionary *_clickActions;
    NSString *_messageFormat;
    NSString *_header;
    NSString *_closeTitle;
}

@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(readonly, copy, nonatomic) NSString *closeTitle; // @synthesize closeTitle=_closeTitle;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
@property(readonly, copy, nonatomic) NSDictionary *clickActions; // @synthesize clickActions=_clickActions;
@property(readonly, nonatomic) NSURL *impressionURL; // @synthesize impressionURL=_impressionURL;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *html; // @synthesize html=_html;
- (void).cxx_destruct;
- (id)initWithHTML:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 localizedHeading:(id)arg4 localizedCloseTitle:(id)arg5 impressionURL:(id)arg6 clickActions:(id)arg7 fullScreen:(_Bool)arg8 messageFormat:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

