//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DZRCurrentTrackUpdater, DZRPlayableObject;

@protocol DZRCurrentTrackUpdaterDelegate <NSObject>
- (void)updater:(id <DZRCurrentTrackUpdater>)arg1 didDetectCurrentTrackChange:(id <DZRPlayableObject>)arg2;
@end

