//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface SearchItemAdapterFactory : NSObject
{
    _Bool _replaceItems;
    NSManagedObjectContext *_context;
}

@property(readonly, nonatomic) _Bool replaceItems; // @synthesize replaceItems=_replaceItems;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)adapterForFreeTierWithSearchResults:(id)arg1;
- (id)adapterForHighTierWithSearchResults:(id)arg1;
- (id)initWithContext:(id)arg1 replaceItems:(_Bool)arg2;

@end

