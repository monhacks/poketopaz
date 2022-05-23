#ifdef __VSCODE
// #include "moves.h"
#endif

#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(SPECIES_VENAP,
              MOVE_BULLET_SEED,
              MOVE_GROWTH,
              MOVE_MEAN_LOOK,
              MOVE_COTTON_SPORE,
              MOVE_SCARY_FACE,
              MOVE_MOONLIGHT),

    egg_moves(SPECIES_CELSINGE,
              MOVE_CRUNCH,
              MOVE_FIRE_SPIN,
              MOVE_CRUSH_CLAW,
              MOVE_QUICK_ATTACK,
              MOVE_CINDERS,
              MOVE_SMOKESCREEN,
              MOVE_PSYBEAM,
              MOVE_MEDITATE),

    egg_moves(SPECIES_ECHOISE,
              MOVE_CASCADE,
              MOVE_TAKE_DOWN,
              MOVE_AGILITY,
              MOVE_RIPTIDE,
              MOVE_FURY_ATTACK,
              MOVE_MUD_SPORT),

    egg_moves(SPECIES_FIRANT,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_CUTTER,
              MOVE_LEECH_LIFE,
              MOVE_POISON_STING,
              MOVE_MORNING_SUN,
              MOVE_AMBUSH),

    egg_moves(SPECIES_FINCHERP,
              MOVE_FEATHER_DANCE,
              MOVE_EXTREME_SPEED,
              MOVE_CALM_WIND,
              MOVE_QUICK_ATTACK),

    egg_moves(SPECIES_MOGEL,
              MOVE_FURY_SWIPES,
              MOVE_SWAGGER,
              MOVE_TICKLE,
              MOVE_SNATCH,
              MOVE_SAND_ATTACK,
              MOVE_COVET,
              MOVE_ENCORE,
              MOVE_HELPING_HAND),

    egg_moves(SPECIES_AMPURE,
              MOVE_FURY_SWIPES,
              MOVE_PURSUIT,
              MOVE_TICKLE,
              MOVE_SNATCH,
              MOVE_SAND_ATTACK,
              MOVE_COVET,
              MOVE_ENCORE,
              MOVE_HELPING_HAND),

    egg_moves(SPECIES_AMPURE,
              MOVE_FURY_SWIPES,
              MOVE_PURSUIT,
              MOVE_TICKLE,
              MOVE_SNATCH,
              MOVE_SAND_ATTACK,
              MOVE_COVET,
              MOVE_ENCORE,
              MOVE_HELPING_HAND),

    egg_moves(SPECIES_SANDSHREW,
              MOVE_SAFEGUARD,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW,
              MOVE_SMOKESCREEN,
              MOVE_BODY_SLAM,
              MOVE_VITAL_THROW),

    egg_moves(SPECIES_LUPINE,
              MOVE_CRUNCH,
              MOVE_PURSUIT,
              MOVE_AGILITY,
              MOVE_DOUBLE_KICK,
              MOVE_SWORDS_DANCE,
              MOVE_AROMATHERAPY),

    egg_moves(SPECIES_JALSIDA,
              MOVE_FURY_CUTTER,
              MOVE_SIGNAL_BEAM,
              MOVE_DISABLE,
              MOVE_PURSUIT,
              MOVE_PSYBEAM),

    egg_moves(SPECIES_SPOINK,
              MOVE_FUTURE_SIGHT,
              MOVE_ROLLOUT,
              MOVE_YAWN,
              MOVE_EXTRASENSORY),

    egg_moves(SPECIES_SPIDREAM,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND,
              MOVE_FORESIGHT,
              MOVE_PSYBEAM,
              MOVE_VENOM_STRIKE,
              MOVE_AMBUSH),

    egg_moves(SPECIES_PINECO,
              MOVE_CURSE,
              MOVE_SCREECH,
              MOVE_SUPERSONIC,
              MOVE_HARDEN),

    egg_moves(SPECIES_EMBEAR,
              MOVE_BITE,
              MOVE_FURY_SWIPES,
              MOVE_FIRE_SPIN,
              MOVE_YAWN,
              MOVE_TEETER_DANCE,
              MOVE_REVENGE),

    egg_moves(SPECIES_MANKEY,
              MOVE_ROCK_SLIDE,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_SMELLING_SALT,
              MOVE_FLAME_WHEEL),

    egg_moves(SPECIES_MAREEP,
              MOVE_BODY_SLAM,
              MOVE_SCREECH,
              MOVE_CHARGE,
              MOVE_SIGNAL_BEAM,
              MOVE_LIGHT_WAVE,
              MOVE_SAFEGUARD,
              MOVE_ODOR_SLEUTH,
              MOVE_LOW_KICK,
              MOVE_REVERSAL),

    egg_moves(SPECIES_WHISPAW,
              MOVE_FLARE,
              MOVE_SOOTHE_SONG,
              MOVE_CHARM,
              MOVE_COVET,
              MOVE_YAWN,
              MOVE_SWIFT,
              MOVE_SING,
              MOVE_MORNING_SUN),

    egg_moves(SPECIES_MOOCALF,
              MOVE_CHARM,
              MOVE_ENDEAVOR,
              MOVE_PSYCH_UP,
              MOVE_BODY_SLAM,
              MOVE_CURSE),

    egg_moves(SPECIES_TAUROS,
              MOVE_CHARM,
              MOVE_ENDEAVOR,
              MOVE_PSYCH_UP,
              MOVE_BODY_SLAM,
              MOVE_CURSE),

    egg_moves(SPECIES_MILTANK,
              MOVE_CHARM,
              MOVE_ENDEAVOR,
              MOVE_PSYCH_UP,
              MOVE_BODY_SLAM,
              MOVE_CURSE),

    egg_moves(SPECIES_INFLARE,
              MOVE_MAGNITUDE,
              MOVE_DOUBLE_EDGE,
              MOVE_COUNTER,
              MOVE_MIRROR_COAT,
              MOVE_MAGIC_COAT),

    egg_moves(SPECIES_DROWZEE,
              MOVE_FAINT_ATTACK,
              MOVE_MAGIC_DUST,
              MOVE_BARRIER,
              MOVE_SWAGGER,
              MOVE_KNOCK_OFF),

    egg_moves(SPECIES_CLEFFA,
              MOVE_LIGHT_WAVE,
              MOVE_PURIFY,
              MOVE_REFRESH,
              MOVE_MYSTIC_POWER,
              MOVE_FLASH_PUNCH,
              MOVE_WISH,
              MOVE_METRONOME),

    egg_moves(SPECIES_CLEFAIRY,
              MOVE_LIGHT_WAVE,
              MOVE_PURIFY,
              MOVE_REFRESH,
              MOVE_MYSTIC_POWER,
              MOVE_FLASH_PUNCH,
              MOVE_WISH,
              MOVE_METRONOME),

    egg_moves(SPECIES_GRIFIC,
              MOVE_FEATHER_DANCE,
              MOVE_ANCIENT_POWER,
              MOVE_DRILL_PECK,
              MOVE_HAZE,
              MOVE_INITIATIVE,
              MOVE_PURSUIT),

    egg_moves(SPECIES_BARKUB,
              MOVE_CRUNCH,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_HEAT_WAVE,
              MOVE_FIRE_SPIN,
              MOVE_THRASH),

    egg_moves(SPECIES_GROWLITHE,
              MOVE_CRUNCH,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_HEAT_WAVE,
              MOVE_FIRE_SPIN,
              MOVE_THRASH),

    egg_moves(SPECIES_VIXUN,
              MOVE_BITE,
              MOVE_FLAME_WHEEL,
              MOVE_HEAT_WAVE,
              MOVE_SAFEGUARD,
              MOVE_FAKE_TEARS,
              MOVE_DESTINY_BOND),

    egg_moves(SPECIES_VULPIX,
              MOVE_BITE,
              MOVE_FLAME_WHEEL,
              MOVE_HEAT_WAVE,
              MOVE_SAFEGUARD,
              MOVE_FAKE_TEARS,
              MOVE_DESTINY_BOND),

    egg_moves(SPECIES_KONDRIA,
              MOVE_PIN_MISSILE,
              MOVE_SPIKES,
              MOVE_MOONLIGHT,
              MOVE_SLASH,
              MOVE_GROWL,
              MOVE_ASTONISH),

    egg_moves(SPECIES_WHISMUR,
              MOVE_TAKE_DOWN,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_SMELLING_SALT,
              MOVE_FLASH_PUNCH,
              MOVE_VITAL_THROW,
              MOVE_RAGE),

    egg_moves(SPECIES_STRIBRA,
              MOVE_MUD_SLAP,
              MOVE_HYPNOSIS,
              MOVE_DOUBLE_EDGE,
              MOVE_FLAME_WHEEL,
              MOVE_SWAGGER,
              MOVE_SWIFT,
              MOVE_QUICK_ATTACK),

    egg_moves(SPECIES_MURKROW,
              MOVE_IMPRISON,
              MOVE_MOONLIGHT,
              MOVE_MIRROR_MOVE,
              MOVE_WING_ATTACK,
              MOVE_SKY_ATTACK,
              MOVE_SPECTRAL_RAY,
              MOVE_FEATHER_DANCE,
              MOVE_PERISH_SONG),

    egg_moves(SPECIES_JACKALANT,
              MOVE_DOOM_SCYTHE,
              MOVE_CONFUSE_RAY,
              MOVE_SCARY_FACE,
              MOVE_SWEET_SCENT,
              MOVE_GROWTH),

    egg_moves(SPECIES_SKALLOY,
              MOVE_DRILL_PECK,
              MOVE_PURSUIT,
              MOVE_SKY_ATTACK,
              MOVE_ANCIENT_POWER,
              MOVE_MIRROR_MOVE,
              MOVE_WHIRLWIND),

    egg_moves(SPECIES_SKARMORY,
              MOVE_DRILL_PECK,
              MOVE_PURSUIT,
              MOVE_SKY_ATTACK,
              MOVE_ANCIENT_POWER,
              MOVE_MIRROR_MOVE,
              MOVE_WHIRLWIND),

    egg_moves(SPECIES_DUSKULL,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_CURSE),

    egg_moves(SPECIES_CASCADET,
              MOVE_HYDRO_PUMP,
              MOVE_FLAIL,
              MOVE_MUD_SHOT,
              MOVE_WATERFALL,
              MOVE_HEAL_BELL,
              MOVE_AMNESIA),

    egg_moves(SPECIES_VENONAT,
              MOVE_BATON_PASS,
              MOVE_SCREECH,
              MOVE_GIGA_DRAIN,
              MOVE_SIGNAL_BEAM),

    egg_moves(SPECIES_SMALLARD,
              MOVE_BUBBLE,
              MOVE_DRAGON_BREATH,
              MOVE_CONFUSION,
              MOVE_RIPTIDE,
              MOVE_TIDAL_WAVE,
              MOVE_ROAR),

    egg_moves(SPECIES_GRIMER,
              MOVE_HAZE,
              MOVE_LICK,
              MOVE_MEAN_LOOK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION),

    egg_moves(SPECIES_KOFFING,
              MOVE_PSYWAVE,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP,
              MOVE_MEAN_LOOK,
              MOVE_SCARY_FACE),

    egg_moves(SPECIES_ZANGOOSE,
              MOVE_CRUNCH,
              MOVE_FAINT_ATTACK,
              MOVE_DOUBLE_EDGE,
              MOVE_ROAR),

    egg_moves(SPECIES_SEVIPER,
              MOVE_BODY_SLAM,
              MOVE_SPIT_UP,
              MOVE_STOCKPILE,
              MOVE_SWALLOW),

    egg_moves(SPECIES_MEOWTH,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_FAKE_TEARS,
              MOVE_PSYCH_UP,
              MOVE_ASSIST),

    egg_moves(SPECIES_LOTAD,
              MOVE_SWEET_SCENT,
              MOVE_FLAIL,
              MOVE_SWORDS_DANCE,
              MOVE_KNOCK_OFF,
              MOVE_DYNAMIC_PUNCH,
              MOVE_ARM_THRUST),

    egg_moves(SPECIES_TRILLOGILL,
              MOVE_DIVE,
              MOVE_SUPERSONIC,
              MOVE_WATER_SPORT,
              MOVE_WHIRLPOOL,
              MOVE_HYDRO_PUMP),

    egg_moves(SPECIES_YANMA,
              MOVE_LEECH_LIFE,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND,
              MOVE_DOUBLE_EDGE,
              MOVE_TEMPER,
              MOVE_GUST),

    egg_moves(SPECIES_SLOWPOKE,
              MOVE_THUNDER_WAVE,
              MOVE_STOMP,
              MOVE_MUDDY_WATER,
              MOVE_CONFUSE_RAY,
              MOVE_CALM_MIND,
              MOVE_ASSIST),

    egg_moves(SPECIES_REMORAID,
              MOVE_MUD_SPORT,
              MOVE_WATER_SPORT,
              MOVE_DRAGON_BREATH,
              MOVE_SPIKE_CANNON),

    egg_moves(SPECIES_PHANTASOMO,
              MOVE_SHADOW_PUNCH,
              MOVE_WISH,
              MOVE_SING,
              MOVE_HEAL_BELL,
              MOVE_PURIFY,
              MOVE_FLASH_PUNCH),

    egg_moves(SPECIES_SERAPH,
              MOVE_FEATHER_DANCE,
              MOVE_WISH,
              MOVE_MAGIC_COAT,
              MOVE_CHARM,
              MOVE_MORNING_SUN,
              MOVE_COMET_PUNCH),

    egg_moves(SPECIES_DUNSPARCE,
              MOVE_BIDE,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_CURSE,
              MOVE_PSYCH_UP,
              MOVE_BODY_SLAM),

    egg_moves(SPECIES_ABSOL,
              MOVE_CRUNCH,
              MOVE_ROAR,
              MOVE_SACRIFICE,
              MOVE_CURSE,
              MOVE_MOONLIGHT),

    egg_moves(SPECIES_EQUILL,
              MOVE_PERISH_SONG,
              MOVE_HEAL_BELL,
              MOVE_FLATTER,
              MOVE_WISH,
              MOVE_IMPRISON,
              MOVE_MIND_READER),

    egg_moves(SPECIES_CORPHISH,
              MOVE_DIZZY_PUNCH,
              MOVE_WATERFALL,
              MOVE_MUD_SLAP,
              MOVE_FOCUS_ENERGY,
              MOVE_METAL_CLAW,
              MOVE_DRAGON_CLAW),

    egg_moves(SPECIES_GARGOTH,
              MOVE_MAGNITUDE,
              MOVE_FIRE_PUNCH,
              MOVE_MAGIC_COAT,
              MOVE_IMPRISON,
              MOVE_MIND_READER,
              MOVE_SQUALL),

    egg_moves(SPECIES_TOGEPI,
              MOVE_SING,
              MOVE_SOOTHE_SONG,
              MOVE_SACRIFICE,
              MOVE_PURIFY,
              MOVE_FAKE_TEARS,
              MOVE_SKY_ATTACK),

    egg_moves(SPECIES_CIRROFT,
              MOVE_EXPLOSION,
              MOVE_WISH,
              MOVE_NIGHT_SHADE,
              MOVE_POISON_GAS),

    egg_moves(SPECIES_DRAKODO,
              MOVE_GLARE,
              MOVE_POISON_FANG,
              MOVE_HAZE,
              MOVE_DRAGON_DANCE,
              MOVE_LICK,
              MOVE_FIREBALL),

    egg_moves(SPECIES_EEVEE,
              MOVE_HOWL,
              MOVE_FLAIL,
              MOVE_CURSE,
              MOVE_SAFEGUARD,
              MOVE_SNATCH,
              MOVE_CHARM),

    egg_moves(SPECIES_CHIARAME,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_CONFUSE_RAY,
              MOVE_HAZE,
              MOVE_LICK),

    egg_moves(SPECIES_MISDREAVUS,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_NIGHT_SHADE,
              MOVE_IMPRISON,
              MOVE_COLD_WIND,
              MOVE_MIST),

    egg_moves(SPECIES_ENGIL,
              MOVE_HYPER_VOICE,
              MOVE_CHARM,
              MOVE_MORNING_SUN,
              MOVE_SPECTRAL_RAY,
              MOVE_COSMIC_POWER,
              MOVE_LOVELY_KISS,
              MOVE_WHIRLWIND),

    egg_moves(SPECIES_DUVAL,
              MOVE_CRUNCH,
              MOVE_FIRE_BATH,
              MOVE_FLAME_WHEEL,
              MOVE_FIREBALL,
              MOVE_FOLLOW_ME,
              MOVE_THUNDER_PUNCH),

    egg_moves(SPECIES_QWILFISH,
              MOVE_FRICTION,
              MOVE_BUBBLE_BEAM,
              MOVE_IRON_DEFENSE,
              MOVE_BIDE),

    egg_moves(SPECIES_TANGELA,
              MOVE_LEECH_SEED,
              MOVE_SWEET_SCENT,
              MOVE_WRAP,
              MOVE_COTTON_SPORE,
              MOVE_MAGIC_DUST),

    egg_moves(SPECIES_TROPIUS,
              MOVE_HEADBUTT,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              MOVE_SIGNAL_BEAM,
              MOVE_FOLLOW_ME),

    egg_moves(SPECIES_BRONTOGON,
              MOVE_DOUBLE_EDGE,
              MOVE_GRASS_WHISTLE,
              MOVE_MEGA_KICK,
              MOVE_SOLAR_BEAM,
              MOVE_ANCIENT_POWER),

    egg_moves(SPECIES_BLITZFAUST,
              MOVE_COUNTER,
              MOVE_DYNAMIC_PUNCH,
              MOVE_SACRIFICE,
              MOVE_FIRE_PUNCH,
              MOVE_HI_JUMP_KICK,
              MOVE_SPIRAL_KICK),

    egg_moves(SPECIES_VILEPHIST,
              MOVE_COUNTER,
              MOVE_DYNAMIC_PUNCH,
              MOVE_BEAT_UP,
              MOVE_THUNDER_PUNCH,
              MOVE_COMET_PUNCH,
              MOVE_AGILITY),

    egg_moves(SPECIES_RHYHORN,
              MOVE_BODY_SLAM,
              MOVE_DYNAMIC_PUNCH,
              MOVE_THRASH,
              MOVE_ROLLOUT,
              MOVE_SAND_ATTACK,
              MOVE_HEADBUTT,
              MOVE_OUTRAGE),

    egg_moves(SPECIES_TORKOAL,
              MOVE_ENDURE,
              MOVE_SOUL_BURN,
              MOVE_SLEEP_TALK,
              MOVE_YAWN,
              MOVE_BURNOUT,
              MOVE_SOLAR_FLARE,
              MOVE_WITHDRAW),

    egg_moves(SPECIES_SINESTRIL,
              MOVE_THRASH,
              MOVE_POISON_FANG,
              MOVE_DRAGON_BREATH,
              MOVE_TAUNT,
              MOVE_AMBUSH,
              MOVE_LICK,
              MOVE_ODOR_SLEUTH),

    egg_moves(SPECIES_SCYTHER,
              MOVE_SONIC_BOOM,
              MOVE_DRAGON_DANCE,
              MOVE_FAINT_ATTACK,
              MOVE_SUPERSONIC),

    egg_moves(SPECIES_BAKURGE,
              MOVE_SKY_UPPERCUT,
              MOVE_BEAT_UP,
              MOVE_COMET_PUNCH,
              MOVE_FLASH_PUNCH,
              MOVE_FOLLOW_ME),

    egg_moves(SPECIES_LAPRAS,
              MOVE_SUBSTITUTE,
              MOVE_REFRESH,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_BODY_SLAM,
              MOVE_YAWN),

    egg_moves(SPECIES_IGLONIA,
              MOVE_ROLLOUT,
              MOVE_MIRROR_COAT,
              MOVE_HEAL_BELL,
              MOVE_POLARIZE,
              MOVE_CREVASSE,
              MOVE_RAPID_SPIN),

    egg_moves(SPECIES_STANTLER,
              MOVE_HORN_ATTACK,
              MOVE_SWORDS_DANCE,
              MOVE_QUICK_ATTACK,
              MOVE_AURORA_BEAM,
              MOVE_SNORE),

    egg_moves(SPECIES_HUSKII,
              MOVE_YAWN,
              MOVE_AGILITY,
              MOVE_DOUBLE_KICK,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW,
              MOVE_CRUNCH),

    egg_moves(SPECIES_REEFRAIN,
              MOVE_HYDRO_PUMP,
              MOVE_HAZE,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_CRUNCH,
              MOVE_DRAGON_BREATH,
              MOVE_DRAGON_DANCE),

    egg_moves(SPECIES_POLARA,
              MOVE_CRUNCH,
              MOVE_METAL_CLAW,
              MOVE_YAWN,
              MOVE_AMNESIA,
              MOVE_FURY_CUTTER,
              MOVE_CURSE,
              MOVE_BODY_SLAM),

    egg_moves(SPECIES_MIRUST,
              MOVE_SCARY_FACE,
              MOVE_WILL_O_WISP,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_PAIN_SPLIT),

    egg_moves(SPECIES_CACNEA,
              MOVE_GRASS_WHISTLE,
              MOVE_ACID,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER,
              MOVE_MAGIC_DUST),

    egg_moves(SPECIES_SCORCHION,
              MOVE_TOXIC,
              MOVE_CURSE,
              MOVE_FIRESTORM,
              MOVE_BEAT_UP,
              MOVE_FIRE_BATH),

    egg_moves(SPECIES_TRAPINCH,
              MOVE_GUST,
              MOVE_FURY_CUTTER,
              MOVE_REVERSAL,
              MOVE_SQUALL,
              MOVE_DOUBLE_EDGE,
              MOVE_TEMPER),

    egg_moves(SPECIES_STARYU,
              MOVE_ROCK_SLIDE,
              MOVE_CONFUSE_RAY,
              MOVE_AMNESIA,
              MOVE_BIDE,
              MOVE_DOUBLE_EDGE,
              MOVE_ANCIENT_POWER,
              MOVE_CONVERSION),

    egg_moves(SPECIES_CORSOLA,
              MOVE_AMNESIA,
              MOVE_CONFUSE_RAY,
              MOVE_MIST,
              MOVE_MAGIC_DUST,
              MOVE_IRON_DEFENSE,
              MOVE_HEAL_BELL,
              MOVE_ASSIST),

    egg_moves(SPECIES_CHINCHOU,
              MOVE_FLAIL,
              MOVE_SCREECH,
              MOVE_DIVE,
              MOVE_PSYBEAM,
              MOVE_WATER_WALL,
              MOVE_CASCADE),

    egg_moves(SPECIES_RELICANTH,
              MOVE_DIVE,
              MOVE_FLAIL,
              MOVE_IRON_DEFENSE,
              MOVE_RIPTIDE,
              MOVE_BODY_SLAM),

    egg_moves(SPECIES_MISTICADE,
              MOVE_GRUDGE,
              MOVE_MEAN_LOOK,
              MOVE_MEMENTO,
              MOVE_PSYBEAM,
              MOVE_SLUDGE_BOMB,
              MOVE_MARIONETTE),

    egg_moves(SPECIES_FLINTUSK,
              MOVE_SLACK_OFF,
              MOVE_AMNESIA,
              MOVE_DOUBLE_KICK,
              MOVE_CURSE,
              MOVE_SHEER_COLD,
              MOVE_BODY_SLAM),

    egg_moves(SPECIES_ALLUFANG,
              MOVE_PURSUIT,
              MOVE_EXTREME_SPEED,
              MOVE_AMBUSH,
              MOVE_METAL_CLAW,
              MOVE_SHEER_COLD,
              MOVE_SPIKES),

    egg_moves(SPECIES_PURIOR,
              MOVE_THUNDER_PUNCH,
              MOVE_FIRE_PUNCH,
              MOVE_DYNAMIC_PUNCH,
              MOVE_SPECTRAL_RAY,
              MOVE_COMET_PUNCH,
              MOVE_SACRIFICE),

    egg_moves(SPECIES_GOLDRAKE,
              MOVE_DRAGON_RAGE,
              MOVE_HYDRO_PUMP,
              MOVE_CRUNCH,
              MOVE_SWORDS_DANCE,
              MOVE_SCARY_FACE,
              MOVE_PURIFY),

    egg_moves(SPECIES_ATLAXA,
              MOVE_CURSE,
              MOVE_MEAN_LOOK,
              MOVE_CONFUSE_RAY,
              MOVE_DESTINY_BOND,
              MOVE_SHADOW_PUNCH,
              MOVE_SWORDS_DANCE),

    egg_moves(SPECIES_SNARLIGER,
              MOVE_CHARGE,
              MOVE_POLARIZE,
              MOVE_THUNDER_WAVE,
              MOVE_AGILITY,
              MOVE_QUICK_ATTACK,
              MOVE_SAND_ATTACK,
              MOVE_MOONLIGHT),

    EGG_MOVES_TERMINATOR
};
