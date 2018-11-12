//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "INSMessageProtocol-Protocol.h"

@class GPBMessage, NSData, NSString;

@interface SPTEventMessage : NSObject <INSMessageProtocol>
{
    GPBMessage *_message;
}

@property(retain, nonatomic) GPBMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *name;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

