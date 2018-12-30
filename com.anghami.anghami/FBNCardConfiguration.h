//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBNCardActionsConfiguration, FBNCardBodyConfiguration, FBNCardHeroConfiguration, UIColor;

@interface FBNCardConfiguration : NSObject
{
    unsigned long long _size;
    double _cornerRadius;
    double _contentInset;
    UIColor *_backdropColor;
    UIColor *_dismissButtonColor;
    FBNCardHeroConfiguration *_heroConfiguration;
    FBNCardBodyConfiguration *_bodyConfiguration;
    FBNCardActionsConfiguration *_actionsConfiguration;
}

+ (id)configurationFromDictionary:(id)arg1 assetsController:(id)arg2;
@property(readonly, nonatomic) FBNCardActionsConfiguration *actionsConfiguration; // @synthesize actionsConfiguration=_actionsConfiguration;
@property(readonly, nonatomic) FBNCardBodyConfiguration *bodyConfiguration; // @synthesize bodyConfiguration=_bodyConfiguration;
@property(readonly, nonatomic) FBNCardHeroConfiguration *heroConfiguration; // @synthesize heroConfiguration=_heroConfiguration;
@property(readonly, nonatomic) UIColor *dismissButtonColor; // @synthesize dismissButtonColor=_dismissButtonColor;
@property(readonly, nonatomic) UIColor *backdropColor; // @synthesize backdropColor=_backdropColor;
@property(readonly, nonatomic) double contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1 assetsController:(id)arg2;

@end

