//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASControlTargetAction : NSObject
{
    id _target;
    _Bool _createdWithNoTarget;
    SEL _action;
}

@property(readonly, nonatomic) _Bool createdWithNoTarget; // @synthesize createdWithNoTarget=_createdWithNoTarget;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) __weak id target;

@end

