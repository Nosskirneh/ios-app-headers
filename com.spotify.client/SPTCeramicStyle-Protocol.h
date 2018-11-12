//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTCeramicCollectionViewLayout, SPTCollectionViewLayout;
@protocol SPTCeramicBlock, SPTCeramicItem, SPTCeramicStyle;

@protocol SPTCeramicStyle <NSObject>
+ (id <SPTCeramicStyle>)ceramicStyleWithInitialFrame:(struct CGRect)arg1 collectionViewLayout:(SPTCeramicCollectionViewLayout *)arg2 cellClasses:(NSArray *)arg3 cellReuseIdentifiers:(NSArray *)arg4 headerViewClass:(Class)arg5 footerViewClass:(Class)arg6 backgroundViewClass:(Class)arg7;
@property(readonly, nonatomic) Class backgroundViewClass;
@property(readonly, nonatomic) Class footerClass;
@property(readonly, nonatomic) NSArray *cellClasses;
@property(readonly, nonatomic) SPTCollectionViewLayout *collectionViewLayout;
@property(readonly, nonatomic) struct CGRect initialFrame;
@property(readonly, nonatomic) Class headerViewClass;
@property(nonatomic) long long renderType;
@property(readonly, nonatomic) NSArray *cellReuseIdentifiers;
- (NSString *)cellIdentifierForItem:(id <SPTCeramicItem>)arg1 inBlock:(id <SPTCeramicBlock>)arg2 itemIndex:(long long)arg3;
@end

