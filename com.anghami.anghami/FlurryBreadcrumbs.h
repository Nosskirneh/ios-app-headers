//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryBreadcrumbs : NSObject
{
}

+ (id)listOfBreadcrumbs;
+ (id)dataWithContentsOfOutputFile;
+ (id)formatBreadcrumbObject:(const CDStruct_417725e1 *)arg1;
+ (void)save;
+ (int)openOutputFile;
+ (id)outputPath;
+ (void)addString:(id)arg1 withTimestamp:(double)arg2;
+ (void)reset;
+ (void)initialize;

@end

