//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GPBInt32Array, UIView;

@interface GILVisualElement : NSObject <NSSecureCoding>
{
    CDStruct_a9c8ee48 _tag;
    UIView *_loggingParent;
    GPBInt32Array *_testCodes;
}

+ (short)classID;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)validateExpectedClass;
- (_Bool)validate;
@property(readonly, copy, nonatomic) GPBInt32Array *testCodes;
- (void)addTestCode:(int)arg1;
@property(nonatomic) __weak UIView *loggingParent;
@property(readonly, nonatomic) _Bool isRootPage;
@property(readonly, nonatomic) int veID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(CDStruct_a9c8ee48)arg1;

@end

