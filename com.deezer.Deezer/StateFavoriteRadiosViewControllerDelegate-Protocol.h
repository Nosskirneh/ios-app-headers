//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZOArtist, DZORadio, StateFavoriteRadiosViewController;

@protocol StateFavoriteRadiosViewControllerDelegate <NSObject>
- (void)stateFavoriteRadiosViewController:(StateFavoriteRadiosViewController *)arg1 didSelectArtist:(DZOArtist *)arg2;
- (void)stateFavoriteRadiosViewController:(StateFavoriteRadiosViewController *)arg1 didSelectRadio:(DZORadio *)arg2;
@end
