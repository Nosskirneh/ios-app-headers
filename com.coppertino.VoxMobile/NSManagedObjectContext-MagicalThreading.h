//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (MagicalThreading)
+ (void)MR_clearContextForCurrentThread;
+ (id)MR_contextForCurrentThread;
+ (void)MR_clearNonMainThreadContextsCache;
+ (void)MR_resetContextForCurrentThread;
@end

