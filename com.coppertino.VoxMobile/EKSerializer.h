//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EKSerializer : NSObject
{
}

+ (void)setValue:(id)arg1 forKeyPath:(id)arg2 inRepresentation:(id)arg3;
+ (void)setValueOnRepresentation:(id)arg1 fromObject:(id)arg2 withPropertyMapping:(id)arg3;
+ (void)setValueOnRepresentation:(id)arg1 fromManagedObject:(id)arg2 withPropertyMapping:(id)arg3 inContext:(id)arg4;
+ (id)serializeCollection:(id)arg1 withMapping:(id)arg2 fromContext:(id)arg3;
+ (id)serializeObject:(id)arg1 withMapping:(id)arg2 fromContext:(id)arg3;
+ (id)serializeCollection:(id)arg1 withMapping:(id)arg2;
+ (id)serializeObject:(id)arg1 withMapping:(id)arg2;

@end
