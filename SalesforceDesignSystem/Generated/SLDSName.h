// Copyright (c) 2015-present, salesforce.com, inc. All rights reserved
// Licensed under BSD 3-Clause - see LICENSE.txt or git.io/sfdc-license

#ifndef SLDSName_h
#define SLDSName_h

//-------------------------------------------------------------------

#define sldsColorTypeNames(enum) [@[\
	@"SLDSFillBrand",\
	@"SLDSFillBrandHover",\
	@"SLDSFillBrandActive",\
	@"SLDSFillHeaderButton",\
	@"SLDSFillHeaderButtonHover",\
	@"SLDSColorBorderPrimary",\
	@"SLDSColorBorderBrandPrimary",\
	@"SLDSColorBorderBrandPrimaryHover",\
	@"SLDSColorBorderBrandPrimaryFocus",\
	@"SLDSColorBorderBrandPrimaryActive",\
	@"SLDSColorBorder",\
	@"SLDSColorBorderBrand",\
	@"SLDSColorBorderBrandDark",\
	@"SLDSColorBorderCustomer",\
	@"SLDSColorBorderDestructive",\
	@"SLDSColorBorderDestructiveHover",\
	@"SLDSColorBorderDestructiveActive",\
	@"SLDSColorBorderInfo",\
	@"SLDSColorBorderError",\
	@"SLDSColorBorderErrorAlt",\
	@"SLDSColorBorderErrorDark",\
	@"SLDSColorBorderOffline",\
	@"SLDSColorBorderSuccess",\
	@"SLDSColorBorderSuccessDark",\
	@"SLDSColorBorderWarning",\
	@"SLDSColorBorderInverse",\
	@"SLDSColorBorderTabSelected",\
	@"SLDSColorBorderTabActive",\
	@"SLDSColorBorderSeparator",\
	@"SLDSColorBorderSeparatorAlt",\
	@"SLDSColorBorderSeparatorAlt2",\
	@"SLDSColorBorderSeparatorInverse",\
	@"SLDSColorBorderRowSelected",\
	@"SLDSColorBorderRowSelectedHover",\
	@"SLDSColorBorderHint",\
	@"SLDSColorBorderSelection",\
	@"SLDSColorBorderSelectionHover",\
	@"SLDSColorBorderSelectionActive",\
	@"SLDSColorBorderCanvasElementSelection",\
	@"SLDSColorBorderCanvasElementSelectionHover",\
	@"SLDSColorBorderIconInverseHint",\
	@"SLDSColorBorderIconInverseHintHover",\
	@"SLDSColorBorderButtonBrand",\
	@"SLDSColorBorderButtonBrandDisabled",\
	@"SLDSColorBorderButtonDefault",\
	@"SLDSColorBorderButtonInverseDisabled",\
	@"SLDSColorBorderInput",\
	@"SLDSColorBorderInputActive",\
	@"SLDSColorBorderInputDisabled",\
	@"SLDSColorBorderInputCheckboxSelectedCheckmark",\
	@"SLDSColorBorderToggleChecked",\
	@"SLDSColorBorderReminder",\
	@"SLDSColorStrokeBrand",\
	@"SLDSColorStrokeBrandHover",\
	@"SLDSColorStrokeBrandActive",\
	@"SLDSColorStrokeDisabled",\
	@"SLDSColorStrokeHeaderButton",\
	@"SLDSButtonColorBorderPrimary",\
	@"SLDSButtonColorBorderBrandPrimary",\
	@"SLDSButtonColorBorderSecondary",\
	@"SLDSCardColorBorder",\
	@"SLDSCardFooterColorBorder",\
	@"SLDSColorPickerSliderThumbBorderColor",\
	@"SLDSColorBorderContextBarDivider",\
	@"SLDSColorBorderContextBarItem",\
	@"SLDSColorBorderContextBarInverseItem",\
	@"SLDSColorBorderContextBarThemeDefault",\
	@"SLDSColorBorderContextBarThemeDefaultAlt",\
	@"SLDSColorBorderContextBarThemeDefaultHover",\
	@"SLDSColorBorderContextBarThemeDefaultActive",\
	@"SLDSPageHeaderColorBorder",\
	@"SLDSPageHeaderJoinedColorBorder",\
	@"SLDSColorBorderPathDivider",\
	@"SLDSProgressColorBorder",\
	@"SLDSProgressColorBorderShade",\
	@"SLDSProgressColorBorderHover",\
	@"SLDSProgressColorBorderActive",\
	@"SLDSSplitViewColorBorder",\
	@"SLDSColorBackgroundPrimary",\
	@"SLDSColorBackgroundSecondary",\
	@"SLDSColorForegroundPrimary",\
	@"SLDSColorContrastPrimary",\
	@"SLDSColorContrastSecondary",\
	@"SLDSColorBackgroundBrandPrimary",\
	@"SLDSColorBackgroundBrandPrimaryHover",\
	@"SLDSColorBackgroundBrandPrimaryFocus",\
	@"SLDSColorBackgroundBrandPrimaryActive",\
	@"SLDSPageColorBackgroundPrimary",\
	@"SLDSColorBackground",\
	@"SLDSColorBackgroundAlt",\
	@"SLDSColorBackgroundAlt2",\
	@"SLDSColorBackgroundAltInverse",\
	@"SLDSColorBackgroundRowHover",\
	@"SLDSColorBackgroundRowActive",\
	@"SLDSColorBackgroundRowSelected",\
	@"SLDSColorBackgroundRowNew",\
	@"SLDSColorBackgroundInverse",\
	@"SLDSColorBackgroundBrowser",\
	@"SLDSColorBackgroundChromeMobile",\
	@"SLDSColorBackgroundChromeDesktop",\
	@"SLDSColorBackgroundCustomer",\
	@"SLDSColorBackgroundHighlight",\
	@"SLDSColorBackgroundHighlightSearch",\
	@"SLDSColorBackgroundSelection",\
	@"SLDSColorBackgroundActionbarIconUtility",\
	@"SLDSColorBackgroundIndicatorDot",\
	@"SLDSColorBackgroundSpinnerDot",\
	@"SLDSColorBackgroundModal",\
	@"SLDSColorBackgroundModalBrand",\
	@"SLDSColorBackgroundNotificationBadge",\
	@"SLDSColorBackgroundNotificationBadgeHover",\
	@"SLDSColorBackgroundNotificationBadgeFocus",\
	@"SLDSColorBackgroundNotificationBadgeActive",\
	@"SLDSColorBackgroundNotification",\
	@"SLDSColorBackgroundNotificationNew",\
	@"SLDSColorBackgroundOrgSwitcherArrow",\
	@"SLDSColorBackgroundPayload",\
	@"SLDSColorBackgroundPost",\
	@"SLDSColorBackgroundUtilityBarHover",\
	@"SLDSColorBackgroundUtilityBarActive",\
	@"SLDSColorBackgroundShade",\
	@"SLDSColorBackgroundShadeDark",\
	@"SLDSColorBackgroundStencil",\
	@"SLDSColorBackgroundStencilAlt",\
	@"SLDSColorBackgroundTempModal",\
	@"SLDSColorBackgroundTempModalTint",\
	@"SLDSColorBackgroundTempModalTintAlt",\
	@"SLDSColorBackgroundBackdrop",\
	@"SLDSColorBackgroundBackdropTint",\
	@"SLDSColorBackgroundScrollbar",\
	@"SLDSColorBackgroundScrollbarTrack",\
	@"SLDSColorBrand",\
	@"SLDSColorBrandDark",\
	@"SLDSColorBrandDarker",\
	@"SLDSColorBackgroundToggle",\
	@"SLDSColorBackgroundToggleDisabled",\
	@"SLDSColorBackgroundToggleHover",\
	@"SLDSColorBackgroundToggleActive",\
	@"SLDSColorBackgroundToggleActiveHover",\
	@"SLDSColorBackgroundModalButton",\
	@"SLDSColorBackgroundModalButtonActive",\
	@"SLDSColorBackgroundInput",\
	@"SLDSColorBackgroundInputActive",\
	@"SLDSColorBackgroundInputCheckbox",\
	@"SLDSColorBackgroundInputCheckboxDisabled",\
	@"SLDSColorBackgroundInputCheckboxSelected",\
	@"SLDSColorBackgroundInputDisabled",\
	@"SLDSColorBackgroundInputError",\
	@"SLDSColorBackgroundInputSearch",\
	@"SLDSColorBackgroundPill",\
	@"SLDSColorBackgroundImageOverlay",\
	@"SLDSColorBackgroundDestructive",\
	@"SLDSColorBackgroundDestructiveHover",\
	@"SLDSColorBackgroundDestructiveActive",\
	@"SLDSColorBackgroundInfo",\
	@"SLDSColorBackgroundError",\
	@"SLDSColorBackgroundErrorDark",\
	@"SLDSColorBackgroundErrorAlt",\
	@"SLDSColorBackgroundOffline",\
	@"SLDSColorBackgroundSuccess",\
	@"SLDSColorBackgroundSuccessDark",\
	@"SLDSColorBackgroundToast",\
	@"SLDSColorBackgroundToastSuccess",\
	@"SLDSColorBackgroundToastError",\
	@"SLDSColorBackgroundWarning",\
	@"SLDSColorBackgroundButtonSuccess",\
	@"SLDSColorBackgroundButtonSuccessHover",\
	@"SLDSColorBackgroundButtonSuccessActive",\
	@"SLDSBadgeColorBackgroundLightest",\
	@"SLDSBadgeColorBackgroundInverse",\
	@"SLDSBrandBandColorBackgroundPrimary",\
	@"SLDSBrandBandColorBackgroundPrimaryTransparent",\
	@"SLDSBrandBandColorBackgroundSecondary",\
	@"SLDSBrandBandColorBackgroundSecondaryTransparent",\
	@"SLDSButtonColorBackgroundPrimary",\
	@"SLDSButtonColorBackgroundBrandPrimary",\
	@"SLDSButtonColorBackgroundSecondary",\
	@"SLDSColorBackgroundButtonBrand",\
	@"SLDSColorBackgroundButtonBrandActive",\
	@"SLDSColorBackgroundButtonBrandHover",\
	@"SLDSColorBackgroundButtonBrandDisabled",\
	@"SLDSColorBackgroundButtonDefault",\
	@"SLDSColorBackgroundButtonDefaultHover",\
	@"SLDSColorBackgroundButtonDefaultFocus",\
	@"SLDSColorBackgroundButtonDefaultActive",\
	@"SLDSColorBackgroundButtonDefaultDisabled",\
	@"SLDSColorBackgroundButtonIcon",\
	@"SLDSColorBackgroundButtonIconHover",\
	@"SLDSColorBackgroundButtonIconFocus",\
	@"SLDSColorBackgroundButtonIconActive",\
	@"SLDSColorBackgroundButtonIconDisabled",\
	@"SLDSColorBackgroundButtonInverse",\
	@"SLDSColorBackgroundButtonInverseActive",\
	@"SLDSColorBackgroundButtonInverseDisabled",\
	@"SLDSCardColorBackground",\
	@"SLDSColorPickerSliderThumbColorBackground",\
	@"SLDSTableColorBackgroundStripes",\
	@"SLDSTableColorBackgroundHeader",\
	@"SLDSTableColorBackgroundHeaderHover",\
	@"SLDSTableColorBackgroundHeaderFocus",\
	@"SLDSColorBackgroundDockedPanelHeader",\
	@"SLDSColorBackgroundDockedPanel",\
	@"SLDSUtilityBarColorBackgroundNotificationBadge",\
	@"SLDSUtilityBarColorBackgroundNotificationFocus",\
	@"SLDSColorBackgroundIconWaffle",\
	@"SLDSGlobalHeaderColorBackground",\
	@"SLDSColorBackgroundContextBar",\
	@"SLDSColorBackgroundContextBarBrandAccent",\
	@"SLDSColorBackgroundContextTabBarItem",\
	@"SLDSColorBackgroundContextBarItemHover",\
	@"SLDSColorBackgroundContextBarItemActive",\
	@"SLDSColorBackgroundContextBarInverseItemHover",\
	@"SLDSColorBackgroundContextBarInverseItemActive",\
	@"SLDSColorBackgroundContextBarActionHighlight",\
	@"SLDSPageHeaderColorBackground",\
	@"SLDSPageHeaderColorBackgroundAlt",\
	@"SLDSColorBackgroundAnchor",\
	@"SLDSColorBackgroundPageHeader",\
	@"SLDSColorBackgroundPathComplete",\
	@"SLDSColorBackgroundPathCompleteHover",\
	@"SLDSColorBackgroundPathCurrent",\
	@"SLDSColorBackgroundPathCurrentHover",\
	@"SLDSColorBackgroundPathIncomplete",\
	@"SLDSColorBackgroundPathIncompleteHover",\
	@"SLDSColorBackgroundPathLost",\
	@"SLDSColorBackgroundGuidance",\
	@"SLDSColorBackgroundPathExpanded",\
	@"SLDSProgressColorBackground",\
	@"SLDSProgressColorBackgroundShade",\
	@"SLDSProgressBarColorBackground",\
	@"SLDSProgressBarColorBackgroundFill",\
	@"SLDSProgressBarColorBackgroundFillSuccess",\
	@"SLDSColorBackgroundProgressRingContent",\
	@"SLDSNotificationColorBackgroundInverse",\
	@"SLDSSliderHandleColorBackground",\
	@"SLDSSliderHandleColorBackgroundHover",\
	@"SLDSSliderHandleColorBackgroundFocus",\
	@"SLDSSliderHandleColorBackgroundActive",\
	@"SLDSSliderTrackColorBackground",\
	@"SLDSSliderTrackColorBackgroundFill",\
	@"SLDSSliderColorBackgroundDisabled",\
	@"SLDSSplitViewColorBackground",\
	@"SLDSSplitViewColorBackgroundRowHover",\
	@"SLDSVerticalNavigationColorBackgroundShadeRowHover",\
	@"SLDSVerticalNavigationColorBackgroundShadeRowActive",\
	@"SLDSColorTextPrimary",\
	@"SLDSColorTextSecondary",\
	@"SLDSColorTextTertiary",\
	@"SLDSColorTextBrandPrimary",\
	@"SLDSColorTextLinkPrimary",\
	@"SLDSColorTextLinkPrimaryHover",\
	@"SLDSColorTextLinkPrimaryActive",\
	@"SLDSColorTextLinkPrimaryFocus",\
	@"SLDSColorTextActionLabel",\
	@"SLDSColorTextActionLabelActive",\
	@"SLDSColorTextBrand",\
	@"SLDSColorTextBrowser",\
	@"SLDSColorTextBrowserActive",\
	@"SLDSColorTextCustomer",\
	@"SLDSColorTextDefault",\
	@"SLDSColorTextError",\
	@"SLDSColorTextInputDisabled",\
	@"SLDSColorTextInputFocusInverse",\
	@"SLDSColorTextInputIcon",\
	@"SLDSColorTextInverse",\
	@"SLDSColorTextInverseWeak",\
	@"SLDSColorTextInverseActive",\
	@"SLDSColorTextInverseHover",\
	@"SLDSColorTextLink",\
	@"SLDSColorTextLinkActive",\
	@"SLDSColorTextLinkDisabled",\
	@"SLDSColorTextLinkFocus",\
	@"SLDSColorTextLinkHover",\
	@"SLDSColorTextLinkInverse",\
	@"SLDSColorTextLinkInverseHover",\
	@"SLDSColorTextLinkInverseActive",\
	@"SLDSColorTextLinkInverseDisabled",\
	@"SLDSColorTextModal",\
	@"SLDSColorTextModalButton",\
	@"SLDSColorTextStageLeft",\
	@"SLDSColorTextTabLabel",\
	@"SLDSColorTextTabLabelSelected",\
	@"SLDSColorTextTabLabelHover",\
	@"SLDSColorTextTabLabelFocus",\
	@"SLDSColorTextTabLabelActive",\
	@"SLDSColorTextTabLabelDisabled",\
	@"SLDSColorTextToast",\
	@"SLDSColorTextWarning",\
	@"SLDSColorTextWarningAlt",\
	@"SLDSColorTextWeak",\
	@"SLDSColorTextIconBrand",\
	@"SLDSColorTextIconUtility",\
	@"SLDSColorTextToggleDisabled",\
	@"SLDSColorTextButtonBrand",\
	@"SLDSColorTextButtonBrandHover",\
	@"SLDSColorTextButtonBrandActive",\
	@"SLDSColorTextButtonBrandDisabled",\
	@"SLDSColorTextButtonDefault",\
	@"SLDSColorTextButtonDefaultHover",\
	@"SLDSColorTextButtonDefaultActive",\
	@"SLDSColorTextButtonDefaultDisabled",\
	@"SLDSColorTextButtonDefaultHint",\
	@"SLDSColorTextButtonInverse",\
	@"SLDSColorTextButtonInverseDisabled",\
	@"SLDSColorTextIconDefault",\
	@"SLDSColorTextIconDefaultHint",\
	@"SLDSColorTextIconInverseHint",\
	@"SLDSColorTextIconDefaultHintBorderless",\
	@"SLDSColorTextIconDefaultHover",\
	@"SLDSColorTextIconDefaultActive",\
	@"SLDSColorTextIconDefaultDisabled",\
	@"SLDSColorTextIconInverse",\
	@"SLDSColorTextIconInverseHover",\
	@"SLDSColorTextIconInverseActive",\
	@"SLDSColorTextIconInverseDisabled",\
	@"SLDSColorTextIconInverseHintHover",\
	@"SLDSColorTextLabel",\
	@"SLDSColorTextPlaceholder",\
	@"SLDSColorTextPlaceholderInverse",\
	@"SLDSColorTextRequired",\
	@"SLDSColorTextPill",\
	@"SLDSColorTextSuccess",\
	@"SLDSColorTextSuccessInverse",\
	@"SLDSButtonColorTextPrimary",\
	@"SLDSTableColorTextHeader",\
	@"SLDSColorTextContextBar",\
	@"SLDSColorTextContextBarInverse",\
	@"SLDSColorTextContextBarActionTrigger",\
	@"SLDSInputStaticColor",\
	@"SLDSColorGray1",\
	@"SLDSColorGray2",\
	@"SLDSColorGray3",\
	@"SLDSColorGray4",\
	@"SLDSColorGray5",\
	@"SLDSColorGray6",\
	@"SLDSColorGray7",\
	@"SLDSColorGray8",\
	@"SLDSColorGray9",\
	@"SLDSColorGray10",\
	@"SLDSColorGray11",\
	@"SLDSColorGray12",\
] objectAtIndex:enum]

//-------------------------------------------------------------------

#define sldsFontTypeNames(enum) [@[\
    @"SLDSFontTypeRegular",\
    @"SLDSFontTypeItalic",\
    @"SLDSFontTypeBold",\
    @"SLDSFontTypeBoldItalic",\
    @"SLDSFontTypeLight",\
    @"SLDSFontTypeLightItalic",\
    @"SLDSFontTypeThin",\
    @"SLDSFontTypeThinItalic"\
] objectAtIndex:enum]

//-------------------------------------------------------------------

#define sldsFontSizeNames(enum) [@[\
    @"SLDSFontSizeXSmall",\
    @"SLDSFontSizeSmall",\
    @"SLDSFontSizeMedium",\
    @"SLDSFontSizeMediumA",\
    @"SLDSFontSizeLarge",\
    @"SLDSFontSizeXLarge",\
    @"SLDSFontSizeXLargeA",\
    @"SLDSFontSizeXxLarge",\
    @"SLDSFontSizeTextXxSmall",\
    @"SLDSFontSizeTextXSmall",\
    @"SLDSFontSizeTextSmall",\
    @"SLDSFontSizeTextMedium",\
    @"SLDSFontSizeTextLarge",\
    @"SLDSFontSizeTextXLarge",\
    @"SLDSFontSizeHeadingXxSmall",\
    @"SLDSFontSizeHeadingXSmall",\
    @"SLDSFontSizeHeadingSmall",\
    @"SLDSFontSizeHeadingMedium",\
    @"SLDSFontSizeHeadingLarge",\
    @"SLDSFontSizeHeadingXLarge",\
    @"SLDSColorPickerInputCustomHexFontSize",\
    @"SLDSInputStaticFontSize",\
    @"SLDSPageHeaderTitleFontSize",\
] objectAtIndex:enum]

//-------------------------------------------------------------------

#define sldsIconTypeNames(enum) [@[\
	@"SLDSActionAddContact",\
	@"SLDSActionAddFile",\
	@"SLDSActionAddPhotoVideo",\
	@"SLDSActionAddRelationship",\
	@"SLDSActionAnnouncement",\
	@"SLDSActionApex",\
	@"SLDSActionApproval",\
	@"SLDSActionBack",\
	@"SLDSActionCall",\
	@"SLDSActionCanvas",\
	@"SLDSActionChangeOwner",\
	@"SLDSActionChangeRecordType",\
	@"SLDSActionCheck",\
	@"SLDSActionClone",\
	@"SLDSActionClose",\
	@"SLDSActionDefer",\
	@"SLDSActionDelete",\
	@"SLDSActionDescription",\
	@"SLDSActionDialIn",\
	@"SLDSActionDownload",\
	@"SLDSActionEdit",\
	@"SLDSActionEditGroups",\
	@"SLDSActionEditRelationship",\
	@"SLDSActionEmail",\
	@"SLDSActionFallback",\
	@"SLDSActionFilter",\
	@"SLDSActionFlow",\
	@"SLDSActionFollow",\
	@"SLDSActionFollowing",\
	@"SLDSActionFreezeUser",\
	@"SLDSActionGoal",\
	@"SLDSActionGoogleNews",\
	@"SLDSActionInfo",\
	@"SLDSActionJoinGroup",\
	@"SLDSActionLeadConvert",\
	@"SLDSActionLeaveGroup",\
	@"SLDSActionLogACall",\
	@"SLDSActionLogEvent",\
	@"SLDSActionManagePermSets",\
	@"SLDSActionMap",\
	@"SLDSActionMore",\
	@"SLDSActionNew",\
	@"SLDSActionNewAccount",\
	@"SLDSActionNewCampaign",\
	@"SLDSActionNewCase",\
	@"SLDSActionNewChildCase",\
	@"SLDSActionNewContact",\
	@"SLDSActionNewCustom1",\
	@"SLDSActionNewCustom10",\
	@"SLDSActionNewCustom100",\
	@"SLDSActionNewCustom11",\
	@"SLDSActionNewCustom12",\
	@"SLDSActionNewCustom13",\
	@"SLDSActionNewCustom14",\
	@"SLDSActionNewCustom15",\
	@"SLDSActionNewCustom16",\
	@"SLDSActionNewCustom17",\
	@"SLDSActionNewCustom18",\
	@"SLDSActionNewCustom19",\
	@"SLDSActionNewCustom2",\
	@"SLDSActionNewCustom20",\
	@"SLDSActionNewCustom21",\
	@"SLDSActionNewCustom22",\
	@"SLDSActionNewCustom23",\
	@"SLDSActionNewCustom24",\
	@"SLDSActionNewCustom25",\
	@"SLDSActionNewCustom26",\
	@"SLDSActionNewCustom27",\
	@"SLDSActionNewCustom28",\
	@"SLDSActionNewCustom29",\
	@"SLDSActionNewCustom3",\
	@"SLDSActionNewCustom30",\
	@"SLDSActionNewCustom31",\
	@"SLDSActionNewCustom32",\
	@"SLDSActionNewCustom33",\
	@"SLDSActionNewCustom34",\
	@"SLDSActionNewCustom35",\
	@"SLDSActionNewCustom36",\
	@"SLDSActionNewCustom37",\
	@"SLDSActionNewCustom38",\
	@"SLDSActionNewCustom39",\
	@"SLDSActionNewCustom4",\
	@"SLDSActionNewCustom40",\
	@"SLDSActionNewCustom41",\
	@"SLDSActionNewCustom42",\
	@"SLDSActionNewCustom43",\
	@"SLDSActionNewCustom44",\
	@"SLDSActionNewCustom45",\
	@"SLDSActionNewCustom46",\
	@"SLDSActionNewCustom47",\
	@"SLDSActionNewCustom48",\
	@"SLDSActionNewCustom49",\
	@"SLDSActionNewCustom5",\
	@"SLDSActionNewCustom50",\
	@"SLDSActionNewCustom51",\
	@"SLDSActionNewCustom52",\
	@"SLDSActionNewCustom53",\
	@"SLDSActionNewCustom54",\
	@"SLDSActionNewCustom55",\
	@"SLDSActionNewCustom56",\
	@"SLDSActionNewCustom57",\
	@"SLDSActionNewCustom58",\
	@"SLDSActionNewCustom59",\
	@"SLDSActionNewCustom6",\
	@"SLDSActionNewCustom60",\
	@"SLDSActionNewCustom61",\
	@"SLDSActionNewCustom62",\
	@"SLDSActionNewCustom63",\
	@"SLDSActionNewCustom64",\
	@"SLDSActionNewCustom65",\
	@"SLDSActionNewCustom66",\
	@"SLDSActionNewCustom67",\
	@"SLDSActionNewCustom68",\
	@"SLDSActionNewCustom69",\
	@"SLDSActionNewCustom7",\
	@"SLDSActionNewCustom70",\
	@"SLDSActionNewCustom71",\
	@"SLDSActionNewCustom72",\
	@"SLDSActionNewCustom73",\
	@"SLDSActionNewCustom74",\
	@"SLDSActionNewCustom75",\
	@"SLDSActionNewCustom76",\
	@"SLDSActionNewCustom77",\
	@"SLDSActionNewCustom78",\
	@"SLDSActionNewCustom79",\
	@"SLDSActionNewCustom8",\
	@"SLDSActionNewCustom80",\
	@"SLDSActionNewCustom81",\
	@"SLDSActionNewCustom82",\
	@"SLDSActionNewCustom83",\
	@"SLDSActionNewCustom84",\
	@"SLDSActionNewCustom85",\
	@"SLDSActionNewCustom86",\
	@"SLDSActionNewCustom87",\
	@"SLDSActionNewCustom88",\
	@"SLDSActionNewCustom89",\
	@"SLDSActionNewCustom9",\
	@"SLDSActionNewCustom90",\
	@"SLDSActionNewCustom91",\
	@"SLDSActionNewCustom92",\
	@"SLDSActionNewCustom93",\
	@"SLDSActionNewCustom94",\
	@"SLDSActionNewCustom95",\
	@"SLDSActionNewCustom96",\
	@"SLDSActionNewCustom97",\
	@"SLDSActionNewCustom98",\
	@"SLDSActionNewCustom99",\
	@"SLDSActionNewEvent",\
	@"SLDSActionNewGroup",\
	@"SLDSActionNewLead",\
	@"SLDSActionNewNote",\
	@"SLDSActionNewNotebook",\
	@"SLDSActionNewOpportunity",\
	@"SLDSActionNewPersonAccount",\
	@"SLDSActionNewTask",\
	@"SLDSActionPasswordUnlock",\
	@"SLDSActionPreview",\
	@"SLDSActionPriority",\
	@"SLDSActionQuestionPostAction",\
	@"SLDSActionQuote",\
	@"SLDSActionRecall",\
	@"SLDSActionRecord",\
	@"SLDSActionRefresh",\
	@"SLDSActionReject",\
	@"SLDSActionRemove",\
	@"SLDSActionRemoveRelationship",\
	@"SLDSActionResetPassword",\
	@"SLDSActionShare",\
	@"SLDSActionShareFile",\
	@"SLDSActionShareLink",\
	@"SLDSActionSharePoll",\
	@"SLDSActionSharePost",\
	@"SLDSActionShareThanks",\
	@"SLDSActionSort",\
	@"SLDSActionSubmitForApproval",\
	@"SLDSActionUpdate",\
	@"SLDSActionUpdateStatus",\
	@"SLDSActionUpload",\
	@"SLDSActionUser",\
	@"SLDSActionUserActivation",\
	@"SLDSActionViewRelationship",\
	@"SLDSActionWebLink",\
	@"SLDSCustom1",\
	@"SLDSCustom10",\
	@"SLDSCustom100",\
	@"SLDSCustom101",\
	@"SLDSCustom102",\
	@"SLDSCustom103",\
	@"SLDSCustom104",\
	@"SLDSCustom105",\
	@"SLDSCustom106",\
	@"SLDSCustom107",\
	@"SLDSCustom108",\
	@"SLDSCustom109",\
	@"SLDSCustom11",\
	@"SLDSCustom110",\
	@"SLDSCustom111",\
	@"SLDSCustom112",\
	@"SLDSCustom113",\
	@"SLDSCustom12",\
	@"SLDSCustom13",\
	@"SLDSCustom14",\
	@"SLDSCustom15",\
	@"SLDSCustom16",\
	@"SLDSCustom17",\
	@"SLDSCustom18",\
	@"SLDSCustom19",\
	@"SLDSCustom2",\
	@"SLDSCustom20",\
	@"SLDSCustom21",\
	@"SLDSCustom22",\
	@"SLDSCustom23",\
	@"SLDSCustom24",\
	@"SLDSCustom25",\
	@"SLDSCustom26",\
	@"SLDSCustom27",\
	@"SLDSCustom28",\
	@"SLDSCustom29",\
	@"SLDSCustom3",\
	@"SLDSCustom30",\
	@"SLDSCustom31",\
	@"SLDSCustom32",\
	@"SLDSCustom33",\
	@"SLDSCustom34",\
	@"SLDSCustom35",\
	@"SLDSCustom36",\
	@"SLDSCustom37",\
	@"SLDSCustom38",\
	@"SLDSCustom39",\
	@"SLDSCustom4",\
	@"SLDSCustom40",\
	@"SLDSCustom41",\
	@"SLDSCustom42",\
	@"SLDSCustom43",\
	@"SLDSCustom44",\
	@"SLDSCustom45",\
	@"SLDSCustom46",\
	@"SLDSCustom47",\
	@"SLDSCustom48",\
	@"SLDSCustom49",\
	@"SLDSCustom5",\
	@"SLDSCustom50",\
	@"SLDSCustom51",\
	@"SLDSCustom52",\
	@"SLDSCustom53",\
	@"SLDSCustom54",\
	@"SLDSCustom55",\
	@"SLDSCustom56",\
	@"SLDSCustom57",\
	@"SLDSCustom58",\
	@"SLDSCustom59",\
	@"SLDSCustom6",\
	@"SLDSCustom60",\
	@"SLDSCustom61",\
	@"SLDSCustom62",\
	@"SLDSCustom63",\
	@"SLDSCustom64",\
	@"SLDSCustom65",\
	@"SLDSCustom66",\
	@"SLDSCustom67",\
	@"SLDSCustom68",\
	@"SLDSCustom69",\
	@"SLDSCustom7",\
	@"SLDSCustom70",\
	@"SLDSCustom71",\
	@"SLDSCustom72",\
	@"SLDSCustom73",\
	@"SLDSCustom74",\
	@"SLDSCustom75",\
	@"SLDSCustom76",\
	@"SLDSCustom77",\
	@"SLDSCustom78",\
	@"SLDSCustom79",\
	@"SLDSCustom8",\
	@"SLDSCustom80",\
	@"SLDSCustom81",\
	@"SLDSCustom82",\
	@"SLDSCustom83",\
	@"SLDSCustom84",\
	@"SLDSCustom85",\
	@"SLDSCustom86",\
	@"SLDSCustom87",\
	@"SLDSCustom88",\
	@"SLDSCustom89",\
	@"SLDSCustom9",\
	@"SLDSCustom90",\
	@"SLDSCustom91",\
	@"SLDSCustom92",\
	@"SLDSCustom93",\
	@"SLDSCustom94",\
	@"SLDSCustom95",\
	@"SLDSCustom96",\
	@"SLDSCustom97",\
	@"SLDSCustom98",\
	@"SLDSCustom99",\
	@"SLDSStandardAccount",\
	@"SLDSStandardAddress",\
	@"SLDSStandardAnnouncement",\
	@"SLDSStandardAnswerBest",\
	@"SLDSStandardAnswerPrivate",\
	@"SLDSStandardAnswerPublic",\
	@"SLDSStandardApproval",\
	@"SLDSStandardApps",\
	@"SLDSStandardAppsAdmin",\
	@"SLDSStandardArticle",\
	@"SLDSStandardAssetRelationship",\
	@"SLDSStandardAssignedResource",\
	@"SLDSStandardAvatar",\
	@"SLDSStandardAvatarLoading",\
	@"SLDSStandardBot",\
	@"SLDSStandardBusinessHours",\
	@"SLDSStandardCalibration",\
	@"SLDSStandardCall",\
	@"SLDSStandardCallHistory",\
	@"SLDSStandardCampaign",\
	@"SLDSStandardCampaignMembers",\
	@"SLDSStandardCanvas",\
	@"SLDSStandardCarousel",\
	@"SLDSStandardCase",\
	@"SLDSStandardCaseChangeStatus",\
	@"SLDSStandardCaseComment",\
	@"SLDSStandardCaseEmail",\
	@"SLDSStandardCaseLogACall",\
	@"SLDSStandardCaseMilestone",\
	@"SLDSStandardCaseTranscript",\
	@"SLDSStandardClient",\
	@"SLDSStandardCms",\
	@"SLDSStandardCoaching",\
	@"SLDSStandardConnectedApps",\
	@"SLDSStandardContact",\
	@"SLDSStandardContactList",\
	@"SLDSStandardContract",\
	@"SLDSStandardContractLineItem",\
	@"SLDSStandardCustom",\
	@"SLDSStandardCustomNotification",\
	@"SLDSStandardDashboard",\
	@"SLDSStandardDatadotcom",\
	@"SLDSStandardDefault",\
	@"SLDSStandardDocument",\
	@"SLDSStandardDrafts",\
	@"SLDSStandardEmail",\
	@"SLDSStandardEmailChatter",\
	@"SLDSStandardEmpty",\
	@"SLDSStandardEndorsement",\
	@"SLDSStandardEntitlement",\
	@"SLDSStandardEntitlementProcess",\
	@"SLDSStandardEntitlementTemplate",\
	@"SLDSStandardEntity",\
	@"SLDSStandardEntityMilestone",\
	@"SLDSStandardEnvironmentHub",\
	@"SLDSStandardEvent",\
	@"SLDSStandardFeed",\
	@"SLDSStandardFeedback",\
	@"SLDSStandardFile",\
	@"SLDSStandardFlow",\
	@"SLDSStandardFolder",\
	@"SLDSStandardForecasts",\
	@"SLDSStandardGenericLoading",\
	@"SLDSStandardGoals",\
	@"SLDSStandardGroupLoading",\
	@"SLDSStandardGroups",\
	@"SLDSStandardHierarchy",\
	@"SLDSStandardHome",\
	@"SLDSStandardHousehold",\
	@"SLDSStandardInsights",\
	@"SLDSStandardInvestmentAccount",\
	@"SLDSStandardLead",\
	@"SLDSStandardLeadInsights",\
	@"SLDSStandardLeadList",\
	@"SLDSStandardLink",\
	@"SLDSStandardListEmail",\
	@"SLDSStandardLiveChat",\
	@"SLDSStandardLocation",\
	@"SLDSStandardLogACall",\
	@"SLDSStandardMacros",\
	@"SLDSStandardMaintenanceAsset",\
	@"SLDSStandardMaintenancePlan",\
	@"SLDSStandardMarketingActions",\
	@"SLDSStandardMerge",\
	@"SLDSStandardMetrics",\
	@"SLDSStandardNews",\
	@"SLDSStandardNote",\
	@"SLDSStandardOmniSupervisor",\
	@"SLDSStandardOperatingHours",\
	@"SLDSStandardOpportunity",\
	@"SLDSStandardOpportunitySplits",\
	@"SLDSStandardOrders",\
	@"SLDSStandardPeople",\
	@"SLDSStandardPerformance",\
	@"SLDSStandardPersonAccount",\
	@"SLDSStandardPhoto",\
	@"SLDSStandardPoll",\
	@"SLDSStandardPortal",\
	@"SLDSStandardPost",\
	@"SLDSStandardPricebook",\
	@"SLDSStandardProcess",\
	@"SLDSStandardProduct",\
	@"SLDSStandardProductConsumed",\
	@"SLDSStandardProductItem",\
	@"SLDSStandardProductItemTransaction",\
	@"SLDSStandardProductRequest",\
	@"SLDSStandardProductRequestLineItem",\
	@"SLDSStandardProductRequired",\
	@"SLDSStandardProductTransfer",\
	@"SLDSStandardQuestionBest",\
	@"SLDSStandardQuestionFeed",\
	@"SLDSStandardQuickText",\
	@"SLDSStandardQuip",\
	@"SLDSStandardQuipSheet",\
	@"SLDSStandardQuotes",\
	@"SLDSStandardRecent",\
	@"SLDSStandardRecord",\
	@"SLDSStandardRelatedList",\
	@"SLDSStandardRelationship",\
	@"SLDSStandardReport",\
	@"SLDSStandardResourceAbsence",\
	@"SLDSStandardResourceCapacity",\
	@"SLDSStandardResourcePreference",\
	@"SLDSStandardResourceSkill",\
	@"SLDSStandardReward",\
	@"SLDSStandardRtcPresence",\
	@"SLDSStandardSalesPath",\
	@"SLDSStandardScanCard",\
	@"SLDSStandardServiceAppointment",\
	@"SLDSStandardServiceContract",\
	@"SLDSStandardServiceCrew",\
	@"SLDSStandardServiceCrewMember",\
	@"SLDSStandardServiceReport",\
	@"SLDSStandardServiceResource",\
	@"SLDSStandardServiceTerritory",\
	@"SLDSStandardServiceTerritoryLocation",\
	@"SLDSStandardServiceTerritoryMember",\
	@"SLDSStandardShipment",\
	@"SLDSStandardSkill",\
	@"SLDSStandardSkillEntity",\
	@"SLDSStandardSkillRequirement",\
	@"SLDSStandardSocial",\
	@"SLDSStandardSolution",\
	@"SLDSStandardSossession",\
	@"SLDSStandardTask",\
	@"SLDSStandardTask2",\
	@"SLDSStandardTeamMember",\
	@"SLDSStandardTemplate",\
	@"SLDSStandardThanks",\
	@"SLDSStandardThanksLoading",\
	@"SLDSStandardTimesheet",\
	@"SLDSStandardTimesheetEntry",\
	@"SLDSStandardTimeslot",\
	@"SLDSStandardToday",\
	@"SLDSStandardTopic",\
	@"SLDSStandardTopic2",\
	@"SLDSStandardUnmatched",\
	@"SLDSStandardUser",\
	@"SLDSStandardWorkOrder",\
	@"SLDSStandardWorkOrderItem",\
	@"SLDSStandardWorkType",\
	@"SLDSUtilityActivity",\
	@"SLDSUtilityAdSet",\
	@"SLDSUtilityAdd",\
	@"SLDSUtilityAdduser",\
	@"SLDSUtilityAnchor",\
	@"SLDSUtilityAnimalAndNature",\
	@"SLDSUtilityAnnouncement",\
	@"SLDSUtilityAnswer",\
	@"SLDSUtilityAnsweredTwice",\
	@"SLDSUtilityApex",\
	@"SLDSUtilityApproval",\
	@"SLDSUtilityApps",\
	@"SLDSUtilityArrowdown",\
	@"SLDSUtilityArrowup",\
	@"SLDSUtilityAttach",\
	@"SLDSUtilityAutomate",\
	@"SLDSUtilityBack",\
	@"SLDSUtilityBan",\
	@"SLDSUtilityBlockVisitor",\
	@"SLDSUtilityBold",\
	@"SLDSUtilityBookmark",\
	@"SLDSUtilityBreadcrumbs",\
	@"SLDSUtilityBroadcast",\
	@"SLDSUtilityBrush",\
	@"SLDSUtilityBucket",\
	@"SLDSUtilityBuilder",\
	@"SLDSUtilityCall",\
	@"SLDSUtilityCampaign",\
	@"SLDSUtilityCancelFileRequest",\
	@"SLDSUtilityCancelTransfer",\
	@"SLDSUtilityCapslock",\
	@"SLDSUtilityCase",\
	@"SLDSUtilityCases",\
	@"SLDSUtilityCenterAlignText",\
	@"SLDSUtilityChangeOwner",\
	@"SLDSUtilityChangeRecordType",\
	@"SLDSUtilityChart",\
	@"SLDSUtilityChat",\
	@"SLDSUtilityCheck",\
	@"SLDSUtilityCheckin",\
	@"SLDSUtilityChevrondown",\
	@"SLDSUtilityChevronleft",\
	@"SLDSUtilityChevronright",\
	@"SLDSUtilityChevronup",\
	@"SLDSUtilityClassicInterface",\
	@"SLDSUtilityClear",\
	@"SLDSUtilityClock",\
	@"SLDSUtilityClose",\
	@"SLDSUtilityCollapseAll",\
	@"SLDSUtilityComments",\
	@"SLDSUtilityCompany",\
	@"SLDSUtilityConnectedApps",\
	@"SLDSUtilityContract",\
	@"SLDSUtilityContractAlt",\
	@"SLDSUtilityCopy",\
	@"SLDSUtilityCopyToClipboard",\
	@"SLDSUtilityCrossfilter",\
	@"SLDSUtilityCustomApps",\
	@"SLDSUtilityCut",\
	@"SLDSUtilityDash",\
	@"SLDSUtilityDatabase",\
	@"SLDSUtilityDatadotcom",\
	@"SLDSUtilityDayview",\
	@"SLDSUtilityDelete",\
	@"SLDSUtilityDeprecate",\
	@"SLDSUtilityDescription",\
	@"SLDSUtilityDesktop",\
	@"SLDSUtilityDislike",\
	@"SLDSUtilityDockPanel",\
	@"SLDSUtilityDown",\
	@"SLDSUtilityDownload",\
	@"SLDSUtilityEdit",\
	@"SLDSUtilityEditForm",\
	@"SLDSUtilityEmail",\
	@"SLDSUtilityEmoji",\
	@"SLDSUtilityEndCall",\
	@"SLDSUtilityEndChat",\
	@"SLDSUtilityErectWindow",\
	@"SLDSUtilityError",\
	@"SLDSUtilityEvent",\
	@"SLDSUtilityExpand",\
	@"SLDSUtilityExpandAll",\
	@"SLDSUtilityExpandAlt",\
	@"SLDSUtilityFallback",\
	@"SLDSUtilityFavorite",\
	@"SLDSUtilityFeed",\
	@"SLDSUtilityFile",\
	@"SLDSUtilityFilter",\
	@"SLDSUtilityFilterList",\
	@"SLDSUtilityFlow",\
	@"SLDSUtilityFoodAndDrink",\
	@"SLDSUtilityForward",\
	@"SLDSUtilityFrozen",\
	@"SLDSUtilityFullWidthView",\
	@"SLDSUtilityGraph",\
	@"SLDSUtilityGroups",\
	@"SLDSUtilityHelp",\
	@"SLDSUtilityHide",\
	@"SLDSUtilityHome",\
	@"SLDSUtilityIdentity",\
	@"SLDSUtilityImage",\
	@"SLDSUtilityInbox",\
	@"SLDSUtilityInfo",\
	@"SLDSUtilityInfoAlt",\
	@"SLDSUtilityInsertTagField",\
	@"SLDSUtilityInsertTemplate",\
	@"SLDSUtilityInternalShare",\
	@"SLDSUtilityItalic",\
	@"SLDSUtilityJumpToBottom",\
	@"SLDSUtilityJumpToTop",\
	@"SLDSUtilityJustifyText",\
	@"SLDSUtilityKanban",\
	@"SLDSUtilityKeyboardDismiss",\
	@"SLDSUtilityKnowledgeBase",\
	@"SLDSUtilityLayers",\
	@"SLDSUtilityLayout",\
	@"SLDSUtilityLeft",\
	@"SLDSUtilityLeftAlignText",\
	@"SLDSUtilityLevelUp",\
	@"SLDSUtilityLightBulb",\
	@"SLDSUtilityLike",\
	@"SLDSUtilityLink",\
	@"SLDSUtilityList",\
	@"SLDSUtilityLocation",\
	@"SLDSUtilityLock",\
	@"SLDSUtilityLogACall",\
	@"SLDSUtilityLogout",\
	@"SLDSUtilityLowerFlag",\
	@"SLDSUtilityMacros",\
	@"SLDSUtilityMagicwand",\
	@"SLDSUtilityMarkAllAsRead",\
	@"SLDSUtilityMatrix",\
	@"SLDSUtilityMerge",\
	@"SLDSUtilityMergeField",\
	@"SLDSUtilityMetrics",\
	@"SLDSUtilityMinimizeWindow",\
	@"SLDSUtilityMoneybag",\
	@"SLDSUtilityMonthlyview",\
	@"SLDSUtilityMove",\
	@"SLDSUtilityMuted",\
	@"SLDSUtilityNew",\
	@"SLDSUtilityNewDirectMessage",\
	@"SLDSUtilityNewWindow",\
	@"SLDSUtilityNews",\
	@"SLDSUtilityNote",\
	@"SLDSUtilityNotebook",\
	@"SLDSUtilityNotification",\
	@"SLDSUtilityOffice365",\
	@"SLDSUtilityOffline",\
	@"SLDSUtilityOfflineCached",\
	@"SLDSUtilityOmniChannel",\
	@"SLDSUtilityOpen",\
	@"SLDSUtilityOpenFolder",\
	@"SLDSUtilityOpenedFolder",\
	@"SLDSUtilityOverflow",\
	@"SLDSUtilityPackage",\
	@"SLDSUtilityPackageOrg",\
	@"SLDSUtilityPackageOrgBeta",\
	@"SLDSUtilityPage",\
	@"SLDSUtilityPalette",\
	@"SLDSUtilityPaste",\
	@"SLDSUtilityPause",\
	@"SLDSUtilityPeople",\
	@"SLDSUtilityPhoneLandscape",\
	@"SLDSUtilityPhonePortrait",\
	@"SLDSUtilityPhoto",\
	@"SLDSUtilityPicklist",\
	@"SLDSUtilityPin",\
	@"SLDSUtilityPinned",\
	@"SLDSUtilityPower",\
	@"SLDSUtilityPreview",\
	@"SLDSUtilityPriority",\
	@"SLDSUtilityPrivatelyShared",\
	@"SLDSUtilityProcess",\
	@"SLDSUtilityPush",\
	@"SLDSUtilityPuzzle",\
	@"SLDSUtilityQuestion",\
	@"SLDSUtilityQuestionMark",\
	@"SLDSUtilityQuestionsAndAnswers",\
	@"SLDSUtilityQuickText",\
	@"SLDSUtilityQuotationMarks",\
	@"SLDSUtilityRating",\
	@"SLDSUtilityRecord",\
	@"SLDSUtilityRecordCreate",\
	@"SLDSUtilityRedo",\
	@"SLDSUtilityRefresh",\
	@"SLDSUtilityRelate",\
	@"SLDSUtilityReminder",\
	@"SLDSUtilityRemoveFormatting",\
	@"SLDSUtilityRemoveLink",\
	@"SLDSUtilityReplace",\
	@"SLDSUtilityReply",\
	@"SLDSUtilityReplyAll",\
	@"SLDSUtilityResetPassword",\
	@"SLDSUtilityResourceAbsence",\
	@"SLDSUtilityResourceCapacity",\
	@"SLDSUtilityResourceTerritory",\
	@"SLDSUtilityRetweet",\
	@"SLDSUtilityRichtextbulletedlist",\
	@"SLDSUtilityRichtextindent",\
	@"SLDSUtilityRichtextnumberedlist",\
	@"SLDSUtilityRichtextoutdent",\
	@"SLDSUtilityRight",\
	@"SLDSUtilityRightAlignText",\
	@"SLDSUtilityRotate",\
	@"SLDSUtilityRows",\
	@"SLDSUtilityRules",\
	@"SLDSUtilitySalesforce1",\
	@"SLDSUtilitySave",\
	@"SLDSUtilitySearch",\
	@"SLDSUtilitySettings",\
	@"SLDSUtilitySetup",\
	@"SLDSUtilitySetupAssistantGuide",\
	@"SLDSUtilityShare",\
	@"SLDSUtilityShareFile",\
	@"SLDSUtilityShareMobile",\
	@"SLDSUtilitySharePost",\
	@"SLDSUtilityShield",\
	@"SLDSUtilityShoppingBag",\
	@"SLDSUtilitySideList",\
	@"SLDSUtilitySignpost",\
	@"SLDSUtilitySmileyAndPeople",\
	@"SLDSUtilitySms",\
	@"SLDSUtilitySnippet",\
	@"SLDSUtilitySocialshare",\
	@"SLDSUtilitySort",\
	@"SLDSUtilitySpinner",\
	@"SLDSUtilityStandardObjects",\
	@"SLDSUtilityStop",\
	@"SLDSUtilityStrikethrough",\
	@"SLDSUtilitySuccess",\
	@"SLDSUtilitySummary",\
	@"SLDSUtilitySummarydetail",\
	@"SLDSUtilitySwitch",\
	@"SLDSUtilitySymbols",\
	@"SLDSUtilitySync",\
	@"SLDSUtilityTable",\
	@"SLDSUtilityTabletLandscape",\
	@"SLDSUtilityTabletPortrait",\
	@"SLDSUtilityTabset",\
	@"SLDSUtilityTask",\
	@"SLDSUtilityTextBackgroundColor",\
	@"SLDSUtilityTextColor",\
	@"SLDSUtilityThreedots",\
	@"SLDSUtilityThreedotsVertical",\
	@"SLDSUtilityThunder",\
	@"SLDSUtilityTileCardList",\
	@"SLDSUtilityTopic",\
	@"SLDSUtilityTouchAction",\
	@"SLDSUtilityTrail",\
	@"SLDSUtilityTravelAndPlaces",\
	@"SLDSUtilityTrending",\
	@"SLDSUtilityTurnOffNotifications",\
	@"SLDSUtilityTypeTool",\
	@"SLDSUtilityUndelete",\
	@"SLDSUtilityUndeprecate",\
	@"SLDSUtilityUnderline",\
	@"SLDSUtilityUndo",\
	@"SLDSUtilityUnlock",\
	@"SLDSUtilityUnmuted",\
	@"SLDSUtilityUp",\
	@"SLDSUtilityUpload",\
	@"SLDSUtilityUser",\
	@"SLDSUtilityUserRole",\
	@"SLDSUtilityVideo",\
	@"SLDSUtilityVoicemailDrop",\
	@"SLDSUtilityVolumeHigh",\
	@"SLDSUtilityVolumeLow",\
	@"SLDSUtilityVolumeOff",\
	@"SLDSUtilityWarning",\
	@"SLDSUtilityWeeklyview",\
	@"SLDSUtilityWifi",\
	@"SLDSUtilityWorkOrderType",\
	@"SLDSUtilityWorld",\
	@"SLDSUtilityYubiKey",\
	@"SLDSUtilityZoomin",\
	@"SLDSUtilityZoomout",\
] objectAtIndex:enum]

#endif /* SLDSName_h */