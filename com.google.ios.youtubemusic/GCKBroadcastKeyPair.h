//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WrappedSenderKey;

@interface GCKBroadcastKeyPair : NSObject
{
    NSData *_senderKey;
    WrappedSenderKey *_wrappedSenderKey;
}

@property(readonly, nonatomic) WrappedSenderKey *wrappedSenderKey; // @synthesize wrappedSenderKey=_wrappedSenderKey;
@property(readonly, nonatomic) NSData *senderKey; // @synthesize senderKey=_senderKey;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithSenderKey:(id)arg1 wrappedSenderKey:(id)arg2;

@end
