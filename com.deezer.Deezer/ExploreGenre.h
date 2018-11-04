//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ParentExploreGenre;

@interface ExploreGenre : NSObject
{
    _Bool _valid;
    NSString *_deezerId;
    NSString *_name;
    long long _order;
    ParentExploreGenre *_parentGenre;
}

+ (id)genreWithDictionary:(id)arg1;
@property(retain, nonatomic) ParentExploreGenre *parentGenre; // @synthesize parentGenre=_parentGenre;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *deezerId; // @synthesize deezerId=_deezerId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToExploreGenre:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

