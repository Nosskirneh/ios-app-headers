//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSString, XMPPIDTracker;

@interface XMPPMessageArchiveManagement : XMPPModule
{
    XMPPIDTracker *xmppIDTracker;
    NSString *_queryID;
}

+ (id)fieldWithVar:(id)arg1 type:(id)arg2 andValue:(id)arg3;
@property(retain, nonatomic) NSString *queryID; // @synthesize queryID=_queryID;
- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (void)handleFormFieldsIQ:(id)arg1 withInfo:(id)arg2;
- (void)retrieveFormFields;
- (void)handleMessageArchiveIQ:(id)arg1 withInfo:(id)arg2;
- (void)retrieveMessageArchiveWithFields:(id)arg1 withResultSet:(id)arg2;

@end

