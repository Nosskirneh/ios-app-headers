//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZRLibraryItemTableViewCell, PlayerControllerListeningContext;

@protocol DZRLibraryItemTableViewCellDelegate <NSObject>
- (PlayerControllerListeningContext *)libraryItemCellListeningContext:(DZRLibraryItemTableViewCell *)arg1;
- (void)libraryItemCellOptionButtonTouched:(DZRLibraryItemTableViewCell *)arg1;

@optional
- (void)libraryItemCellLoveButtonTouched:(DZRLibraryItemTableViewCell *)arg1;
- (void)libraryItemCellPlayButtonTouched:(DZRLibraryItemTableViewCell *)arg1;
@end

