//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, VOXCompositeFRC;
@protocol NSFetchedResultsSectionInfo;

@protocol VOXCompositeFRCDelegate <NSObject>

@optional
- (NSString *)controller:(VOXCompositeFRC *)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(VOXCompositeFRC *)arg1;
- (void)controller:(VOXCompositeFRC *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controller:(VOXCompositeFRC *)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(VOXCompositeFRC *)arg1;
@end
