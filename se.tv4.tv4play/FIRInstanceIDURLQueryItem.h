//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIRInstanceIDURLQueryItem : NSObject
{
    NSString *_name;
    NSString *_value;
}

+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

