//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RHModelChange : NSObject
{
    NSArray *_oldSections;
    NSArray *_sections;
    NSArray *_oldModels;
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) NSArray *oldModels; // @synthesize oldModels=_oldModels;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *oldSections; // @synthesize oldSections=_oldSections;
- (void).cxx_destruct;
- (id)firstSectionModels;
- (id)firstSectionOldModels;
- (id)initWithOldSections:(id)arg1 newSections:(id)arg2 oldModels:(id)arg3 newModels:(id)arg4;
@property(readonly, nonatomic) _Bool hasAtLeastOneItem;

@end

