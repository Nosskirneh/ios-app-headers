//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, YTConnectionsOverflowCollectionViewController;

@protocol YTConnectionsOverflowCollectionViewControllerDelegate <NSObject>
- (_Bool)connectionsOverflowCollectionViewController:(YTConnectionsOverflowCollectionViewController *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)connectionsOverflowCollectionViewController:(YTConnectionsOverflowCollectionViewController *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)connectionsOverflowCollectionViewController:(YTConnectionsOverflowCollectionViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

