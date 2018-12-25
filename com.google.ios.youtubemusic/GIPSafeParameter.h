//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GIPSafeParameter : NSObject <NSCopying>
{
    unsigned long long _type;
    NSString *_comment;
}

@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 comment:(id)arg2;

@end

