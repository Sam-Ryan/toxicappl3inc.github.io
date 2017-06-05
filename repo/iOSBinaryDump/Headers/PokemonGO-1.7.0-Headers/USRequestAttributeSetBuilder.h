//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, USParametersProvider;

@interface USRequestAttributeSetBuilder : NSObject
{
    NSArray *_attributeSets;
    NSArray *_attributeSetFilters;
    USParametersProvider *_parameterProvider;
    NSMutableDictionary *_filtersToAttributeSetNames;
    NSDictionary *_baseParameterToSelectorMap;
    NSDictionary *_optionalParameterToSelectorMap;
    NSMutableDictionary *_parameterProvidersCache;
    NSArray *_sortedFilters;
}

@property(retain, nonatomic) NSArray *sortedFilters; // @synthesize sortedFilters=_sortedFilters;
@property(retain, nonatomic) NSMutableDictionary *parameterProvidersCache; // @synthesize parameterProvidersCache=_parameterProvidersCache;
@property(retain, nonatomic) NSDictionary *optionalParameterToSelectorMap; // @synthesize optionalParameterToSelectorMap=_optionalParameterToSelectorMap;
@property(retain, nonatomic) NSDictionary *baseParameterToSelectorMap; // @synthesize baseParameterToSelectorMap=_baseParameterToSelectorMap;
@property(retain, nonatomic) NSMutableDictionary *filtersToAttributeSetNames; // @synthesize filtersToAttributeSetNames=_filtersToAttributeSetNames;
@property(retain, nonatomic) USParametersProvider *parameterProvider; // @synthesize parameterProvider=_parameterProvider;
@property(retain, nonatomic) NSArray *attributeSetFilters; // @synthesize attributeSetFilters=_attributeSetFilters;
@property(retain, nonatomic) NSArray *attributeSets; // @synthesize attributeSets=_attributeSets;
- (void).cxx_destruct;
- (id)parametersFromProviders:(id)arg1;
- (id)includeAttributes:(id)arg1 inSet:(id)arg2;
- (id)excludeAttributes:(id)arg1 fromSet:(id)arg2;
- (id)includesForAttributeSetWithName:(id)arg1;
- (id)excludesForAttributeSetWithName:(id)arg1;
- (id)parametersForAttributeSetNamed:(id)arg1;
- (id)attributeSetNameForEvent:(id)arg1;
- (id)initWithAttributeSets:(id)arg1 attributeSetFilters:(id)arg2 parameterProvider:(id)arg3;
- (id)init;

@end
