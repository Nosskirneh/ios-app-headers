//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface IMMoatVerification : NSObject <NSSecureCoding>
{
    NSString *_viewableImpressionResource;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *viewableImpressionResource; // @synthesize viewableImpressionResource=_viewableImpressionResource;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

