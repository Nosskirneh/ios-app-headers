//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTCeramicViewModel : NSObject
{
    id <SPTCeramicSpace> _space;
}

@property(retain, nonatomic) id <SPTCeramicSpace> space; // @synthesize space=_space;
- (void).cxx_destruct;
- (id)requestIdForBlockAtIndex:(unsigned long long)arg1;
- (id)blockForIndex:(long long)arg1;
@property(readonly, nonatomic, getter=isSpaceLoaded) _Bool spaceLoaded;
@property(readonly, nonatomic) long long numberOfBlocks;
@property(readonly, nonatomic) NSString *title;

@end

