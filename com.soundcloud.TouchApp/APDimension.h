//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APDimension : NSObject
{
    long long _index;
    NSString *_bucket;
}

+ (id)dimensionForIndex:(long long)arg1 bucket:(id)arg2;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToDimension:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

