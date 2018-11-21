//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HUBViewModelDiff : NSObject
{
    _Bool _headerComponentHasChanged;
    NSArray *_insertedBodyComponentIndexPaths;
    NSArray *_deletedBodyComponentIndexPaths;
    NSArray *_reloadedBodyComponentIndexPaths;
}

+ (id)diffFromViewModel:(id)arg1 toViewModel:(id)arg2;
+ (id)diffFromViewModel:(id)arg1 toViewModel:(id)arg2 algorithm:(CDUnknownFunctionPointerType)arg3;
@property(nonatomic) _Bool headerComponentHasChanged; // @synthesize headerComponentHasChanged=_headerComponentHasChanged;
@property(readonly, nonatomic) NSArray *reloadedBodyComponentIndexPaths; // @synthesize reloadedBodyComponentIndexPaths=_reloadedBodyComponentIndexPaths;
@property(readonly, nonatomic) NSArray *deletedBodyComponentIndexPaths; // @synthesize deletedBodyComponentIndexPaths=_deletedBodyComponentIndexPaths;
@property(readonly, nonatomic) NSArray *insertedBodyComponentIndexPaths; // @synthesize insertedBodyComponentIndexPaths=_insertedBodyComponentIndexPaths;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)calculateHeaderChangesFromViewModel:(id)arg1 toViewModel:(id)arg2;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 reloads:(id)arg3;

@end

