//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZDSTargetAction : NSObject
{
    id $target;
    SEL $action;
}

@property(nonatomic) SEL action; // @synthesize action=$action;
@property(nonatomic) id target; // @synthesize target=$target;
- (id)performWithObject:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

