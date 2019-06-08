//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSManagedObjectContext, NSNumber, NSSet, RHEditorialMO;

@protocol RHEditorialAssociatedContent <NSObject>
+ (void)setAssociationsForEditorial:(RHEditorialMO *)arg1 associations:(NSSet *)arg2;
+ (NSSet *)existingAssociationsForEditorial:(RHEditorialMO *)arg1;
+ (id)insertInManagedObjectContext:(NSManagedObjectContext *)arg1;
+ (Class)contentClass;
@property(retain, nonatomic) RHEditorialMO *editorial;
@property(retain, nonatomic) NSNumber *ordinal;
@property(retain, nonatomic) id content;
@end

