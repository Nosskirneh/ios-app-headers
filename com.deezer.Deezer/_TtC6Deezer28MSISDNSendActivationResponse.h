//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6Deezer28MSISDNSendActivationResponse : NSObject
{
    // Error parsing type: , name: attemptSMS
    // Error parsing type: , name: attemptCall
    // Error parsing type: , name: loadingDuration
}

- (id)initWithDictionary:(id)arg1;
- (id)init;
@property(nonatomic) double loadingDuration; // @synthesize loadingDuration;
@property(nonatomic, readonly) _Bool noMoreAttempt;
@property(nonatomic) long long attemptCall; // @synthesize attemptCall;
@property(nonatomic) long long attemptSMS; // @synthesize attemptSMS;

@end

