//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRNotificationAttachment-Protocol.h"

@class NSString;

@interface DZRNotificationAttachmentQuotation : NSObject <DZRNotificationAttachment>
{
    NSString *_message;
}

@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)initFromJson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

