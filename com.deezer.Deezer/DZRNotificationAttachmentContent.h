//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRNotificationAttachment-Protocol.h"

@class NSString;
@protocol Illustration;

@interface DZRNotificationAttachmentContent : NSObject <DZRNotificationAttachment>
{
    _Bool _big;
    NSString *_title;
    NSString *_subtitle;
    id <Illustration> _picture;
}

@property(readonly, nonatomic, getter=isBig) _Bool big; // @synthesize big=_big;
@property(readonly, nonatomic) id <Illustration> picture; // @synthesize picture=_picture;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)initFromJson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

