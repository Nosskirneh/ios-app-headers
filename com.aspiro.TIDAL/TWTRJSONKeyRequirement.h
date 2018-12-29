//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TWTRJSONKeyRequirement : NSObject
{
    _Bool _required;
    Class _klass;
}

+ (id)requiredURL;
+ (id)optionalURL;
+ (id)requiredDate;
+ (id)optionalDate;
+ (id)requiredNumber;
+ (id)optionalNumber;
+ (id)requiredString;
+ (id)optionalString;
+ (id)optionalKeyOfAnyClass;
+ (id)requiredKeyOfClass:(Class)arg1;
+ (id)optionalKeyOfClass:(Class)arg1;
@property(readonly, nonatomic, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(readonly, nonatomic) Class klass; // @synthesize klass=_klass;
- (void).cxx_destruct;
- (id)description;
- (id)initWithClass:(Class)arg1 isRequired:(_Bool)arg2;

@end

