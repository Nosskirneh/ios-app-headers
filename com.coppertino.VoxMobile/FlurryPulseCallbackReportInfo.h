//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface FlurryPulseCallbackReportInfo : NSObject <NSCoding>
{
    NSString *_invokeId;
    NSNumber *_callbackId;
    NSString *_substitutedUrl;
    NSMutableArray *_attempts;
}

@property(retain, nonatomic) NSMutableArray *attempts; // @synthesize attempts=_attempts;
@property(retain, nonatomic) NSString *substitutedUrl; // @synthesize substitutedUrl=_substitutedUrl;
@property(retain, nonatomic) NSNumber *callbackId; // @synthesize callbackId=_callbackId;
@property(retain, nonatomic) NSString *invokeId; // @synthesize invokeId=_invokeId;
- (void).cxx_destruct;
- (unsigned long long)removeSentAttempts;
- (void)setAttemptsSent;
- (_Bool)finalAttemptMade;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

