//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class NSString;

@interface ANGPlayMoreLikeThisIntentResponse : INIntentResponse
{
    // Error parsing type: , name: code
}

+ (id)successIntentResponseWithTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end

