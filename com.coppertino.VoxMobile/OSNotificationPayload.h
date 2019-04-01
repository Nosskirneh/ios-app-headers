//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OSNotificationPayload : NSObject
{
    _Bool _contentAvailable;
    NSArray *_actionButtons;
    NSDictionary *_additionalData;
    unsigned long long _badge;
    NSString *_body;
    NSString *_notificationID;
    NSString *_launchURL;
    NSDictionary *_rawPayload;
    NSString *_sound;
    NSString *_subtitle;
    NSString *_title;
    NSDictionary *_attachments;
}

@property(readonly) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) NSString *sound; // @synthesize sound=_sound;
@property(readonly) NSDictionary *rawPayload; // @synthesize rawPayload=_rawPayload;
@property(readonly) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(readonly) _Bool contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(readonly) NSString *body; // @synthesize body=_body;
@property(readonly) unsigned long long badge; // @synthesize badge=_badge;
@property(readonly) NSDictionary *additionalData; // @synthesize additionalData=_additionalData;
@property(readonly) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
- (void).cxx_destruct;
- (id)initWithRawMessage:(id)arg1;

@end

