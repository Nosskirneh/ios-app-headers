//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAdOverlayContainer, SPTAdOverlayContentUnitDelegate;

@protocol SPTAdOverlayContentUnit <NSObject>
@property(nonatomic) __weak id <SPTAdOverlayContentUnitDelegate> delegate;
- (void)containerWillDismiss:(id <SPTAdOverlayContainer>)arg1;
@end

