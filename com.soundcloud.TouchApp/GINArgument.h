//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GINArgument : NSObject
{
    unsigned long long _type;
    id _object;
    long long _integer;
}

+ (_Bool)setNextArgumentInList:(char *)arg1 atIndex:(unsigned long long)arg2 inInvocation:(id)arg3;
+ (id)argumentWithInteger:(long long)arg1;
+ (id)argumentWithObject:(id)arg1;
@property(nonatomic) long long integer; // @synthesize integer=_integer;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setArgumentInInvocation:(id)arg1 atIndex:(unsigned long long)arg2;

@end

