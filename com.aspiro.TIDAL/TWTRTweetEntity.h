//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TWTRJSONConvertible-Protocol.h"

@class NSString;

@interface TWTRTweetEntity : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    long long _startIndex;
    long long _endIndex;
}

@property(readonly, nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToTweetEntity:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

