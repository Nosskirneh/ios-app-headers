//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface ADJSessionParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_callbackParameters;
    NSMutableDictionary *_partnerParameters;
}

@property(retain, nonatomic) NSMutableDictionary *partnerParameters; // @synthesize partnerParameters=_partnerParameters;
@property(retain, nonatomic) NSMutableDictionary *callbackParameters; // @synthesize callbackParameters=_callbackParameters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

